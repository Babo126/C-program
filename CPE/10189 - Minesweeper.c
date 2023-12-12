#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n, m; //n:height;m:width
char map[105][105];

//如果讀取到地雷，就將周圍八個數字都+1 
void fill(int x, int y){
	int i, j;
	for(i = -1;i <= 1; i++){
		for(j = -1;j <= 1; j++){
			if(map[x+i][y+j] != '*'){
				map[x+i][y+j]++;
			}
		}
	}
}
int main(){
	while(scanf("%d %d", &n, &m) != EOF){
		if(n == 0 && m == 0){
			break;
		}
		
		//地圖初始化為'0'(字元) 
		int i, j;
		for(i = 0;i < n; i++){
			for(j = 0;j < m; j++){
				map[i][j] = '0';
			}
		}
		
		//使用c 來讀取每一個字元(拜訪每一個位置) 
		for(i = 0;i < n; i++){
			for(j = 0;j < m; j++){
				char c = getchar();
				//讀取到換行符吸收掉 
				while(c == '\n'){
					c = getchar();
				}
				//讀取到地雷 >> 呼叫fill 
				if(c == '*'){
					map[i][j] = '*';
					fill(i, j);
				}
			}
		}
		
		//output
		int f = 1; //f for field
		printf("Field #%d:\n", c);
		for(i = 0;i < n; i++){
			for(j = 0;j < m; j++){
				printf("%c ", map[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		f++;
	}
}
