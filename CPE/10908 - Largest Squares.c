#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		//Ū������ΰ��B�e�B�y�м� 
		int h, w, c; //h:height, w:width, c:case
		scanf("%d %d %d", &h, &w, &c);
		//�M�Žw�İ�
		while(getchar() != '\n');
		//Ū���զ�����Ϊ��r�� 
		int i, j;
		char square[h+1][w+1];
		for(i = 0;i < h; i++){
			fgets(square[i], w+2, stdin);
			//���������
			if(square[i][strlen(square[i]) - 1] == '\n'){
				square[i][strlen(square[i]) - 1] == '\0';
			} 
		}
		
		//output information
		printf("%d %d %d\n", h, w, c); 
		//Ū��c���y�� 
		while(c--){
			int row, col;
			scanf("%d %d", &row, &col);
			
			int s = 0; //s for size
			int ans = 1;
			while(ans){
				s++; 
				//�]�w�C�@����ɽd�� 
				int rStart = row - s;
				int rEnd = row + s;
				int cStart = col - s;
				int cEnd = col + s;
				//�W�X��� 
				if(rStart < 0 || rEnd >= h || cStart < 0 || cEnd >= w){
					break;
				}
				
				//�ˬd�P�䤸��
				for(i = rStart;i <= rEnd; i++){
					for(j = cStart;j <= cEnd; j++){
						if(square[i][j] != square[row][col]){
							ans = 0;
						}
					}
				} 
			}
			//�L�X�̤j���諬�e
			printf("%d\n", 2*s-1); 
		}
	}
} 
