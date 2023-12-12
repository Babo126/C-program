#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int t, c = 1; //t for testcase; c for case 1, 2...
	scanf("%d", &t);
	while(t--){
		printf("Case %d:\n", c);
		//讀取每個字元成本 
		int i, ink[36] = {0};
		for(i = 0; i < 36; i++){
			scanf("%d", &ink[i]);
		}
		//讀取N個數字 
		int n;
		scanf("%d", &n);
		int *num = (int*)malloc(n * sizeof(int));
		for(i = 0;i < n; i++){
			scanf("%d", &num[i]);
		}
		//計算每個數字的進位制轉換 
		for(i = 0;i < n; i++){
			long long int cost[37] = {0}; //用以儲存每個進位制價格,最大是36進位所以陣列最長為37 
			long long int min = LONG_LONG_MAX; //最小成本初始值設定很大，便可以輕易被第一次計算取代 
			//計算2~36進位的價錢
			int j; 
			for(j = 2;j <= 36; j++){
				int tmp = num[i]; //暫存數字以做計算 
				//短除法 
				while(tmp > 0){
					int pos = tmp % j; //餘數即為對應的進位轉換數字索引 
					cost[j] += ink[pos]; //計算價錢
					tmp /= j; 
				}
				
				if(cost[j] <= min){
					min = cost[j];
				}
			}	
			
			printf("Cheapest base(s) for number %d:", num[i]);
			
			for(j = 2;j <= 36; j++){
				if(cost[j] == min){
					printf(" %d", j);
				}
			}
			printf("\n");
		}
		//使用完畢要釋放 
		free(num);	
		//偵測是否為最後一個case(不用換行) 
		if(t > 0){
			printf("\n");
		}
		
		c++;
	}
	
	return 0;
} 




