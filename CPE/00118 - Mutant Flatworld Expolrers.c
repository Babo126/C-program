#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int corX, corY;
	scanf("%d %d", &corX, &corY);
	//清衝緩衝區
	while(getchar() != '\n'); 
	//每一筆資料的起始點 
	int x, y;
	char dir, move[101];
	while(scanf("%d %d %c", &x, &y, &dir) != EOF){
		getchar();
		scanf("%s", move);
		
		int i, lost = 0; //假設不會超出邊界 
		for(i = 0;i < strlen(move); i++){
			int prevX = x, prevY = y; //保存先前位置 
			char prevDir = dir; //保存先前方位 
			//判斷指令行為 
			if(move[i] == 'F'){
				switch(dir){
					case 'N':
						//Y座標的正負值是相反的，向上實際上要減 
						y++;
						break;
					case 'E':
						x++;
						break; 
					case 'S':
						y--;
						break;
					case 'W':
						x--;
						break;	
				}  
			}
			else if(move[i] == 'R'){
				switch(dir){
					case 'N':
						dir = 'E';
						break;
					case 'E':
						dir = 'S';
						break; 
					case 'S':
						dir = 'W';
						break;
					case 'W':
						dir = 'N';
						break;	
				}
			}
			else if(move[i] == 'L'){
				switch(dir){
					case 'N':
						dir = 'W';
						break;
					case 'W':
						dir = 'S';
						break; 
					case 'S':
						dir = 'E';
						break;
					case 'E':
						dir = 'N';
						break;	
				}
			}
			//判斷機器人是否仍在地圖內
			if(x < 0 || x > corX || y < 0 || y > corY){
				lost = 1;
				x = prevX;
				y = prevY;
				dir = prevDir;
				break;
			}
		} 
		
		//打印結果 
		if(lost == 1){
			printf("%d %d %c LOST\n", x, y, dir);
		}
		else{
			printf("%d %d %c\n", x, y, dir);
		}
	}
	return 0;
} 
