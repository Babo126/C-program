#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n, m; //n:height;m:width
char map[105][105];

//�p�GŪ����a�p�A�N�N�P��K�ӼƦr��+1 
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
		
		//�a�Ϫ�l�Ƭ�'0'(�r��) 
		int i, j;
		for(i = 0;i < n; i++){
			for(j = 0;j < m; j++){
				map[i][j] = '0';
			}
		}
		
		//�ϥ�c ��Ū���C�@�Ӧr��(���X�C�@�Ӧ�m) 
		for(i = 0;i < n; i++){
			for(j = 0;j < m; j++){
				char c = getchar();
				//Ū���촫��ŧl���� 
				while(c == '\n'){
					c = getchar();
				}
				//Ū����a�p >> �I�sfill 
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
