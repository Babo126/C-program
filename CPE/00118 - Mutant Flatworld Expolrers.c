#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int corX, corY;
	scanf("%d %d", &corX, &corY);
	//�M�Ľw�İ�
	while(getchar() != '\n'); 
	//�C�@����ƪ��_�l�I 
	int x, y;
	char dir, move[101];
	while(scanf("%d %d %c", &x, &y, &dir) != EOF){
		getchar();
		scanf("%s", move);
		
		int i, lost = 0; //���]���|�W�X��� 
		for(i = 0;i < strlen(move); i++){
			int prevX = x, prevY = y; //�O�s���e��m 
			char prevDir = dir; //�O�s���e��� 
			//�P�_���O�欰 
			if(move[i] == 'F'){
				switch(dir){
					case 'N':
						//Y�y�Ъ����t�ȬO�ۤϪ��A�V�W��ڤW�n�� 
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
			//�P�_�����H�O�_���b�a�Ϥ�
			if(x < 0 || x > corX || y < 0 || y > corY){
				lost = 1;
				x = prevX;
				y = prevY;
				dir = prevDir;
				break;
			}
		} 
		
		//���L���G 
		if(lost == 1){
			printf("%d %d %c LOST\n", x, y, dir);
		}
		else{
			printf("%d %d %c\n", x, y, dir);
		}
	}
	return 0;
} 
