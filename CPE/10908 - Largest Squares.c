#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		//讀取長方形高、寬、座標數 
		int h, w, c; //h:height, w:width, c:case
		scanf("%d %d %d", &h, &w, &c);
		//清空緩衝區
		while(getchar() != '\n');
		//讀取組成長方形的字元 
		int i, j;
		char square[h+1][w+1];
		for(i = 0;i < h; i++){
			fgets(square[i], w+2, stdin);
			//移除換行符
			if(square[i][strlen(square[i]) - 1] == '\n'){
				square[i][strlen(square[i]) - 1] == '\0';
			} 
		}
		
		//output information
		printf("%d %d %d\n", h, w, c); 
		//讀取c筆座標 
		while(c--){
			int row, col;
			scanf("%d %d", &row, &col);
			
			int s = 0; //s for size
			int ans = 1;
			while(ans){
				s++; 
				//設定每一次邊界範圍 
				int rStart = row - s;
				int rEnd = row + s;
				int cStart = col - s;
				int cEnd = col + s;
				//超出邊界 
				if(rStart < 0 || rEnd >= h || cStart < 0 || cEnd >= w){
					break;
				}
				
				//檢查周邊元素
				for(i = rStart;i <= rEnd; i++){
					for(j = cStart;j <= cEnd; j++){
						if(square[i][j] != square[row][col]){
							ans = 0;
						}
					}
				} 
			}
			//印出最大長方型寬
			printf("%d\n", 2*s-1); 
		}
	}
} 
