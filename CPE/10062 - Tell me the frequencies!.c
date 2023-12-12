#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
	char str[1001];
	int c = 1;
	while(fgets(str, 1001, stdin) != NULL){
		int ascii[97] = {0};
		int count[97] = {0};
		int i, j;
		//產生ASCII值 
		for(i = 0;i < 96; i++){
			ascii[i] = i + 32;
		} 
		//計算次數 
		for(i = 0;i < strlen(str); i++){
			count[str[i] - 32]++;
		}
		//排序大小 bubble sort
		for(i = 0;i < 96; i++){
			for(j = 0;j < 96-i-1; j++){
				//數字大者放後面 
				if(count[j] > count[j+1]){
					int tmp = ascii[j];
					ascii[j] = ascii[j+1];
					ascii[j+1] = tmp;
					
					tmp = count[j];
					count[j] = count[j+1];
					count[j+1] = tmp;
				}
				//數字一樣大時，ASCII較大者排後面 
				else if(count[j] == count[j+1] && ascii[j] < ascii[j+1]){
					int tmp = ascii[j];
					ascii[j] = ascii[j+1];
					ascii[j+1] = tmp;
				}
			}
		} 
		//output 
		for(i = 0;i < 96; i++){
			if(count[i] != 0){
				printf("%d %d\n", ascii[i], count[i]);
			}
		}
		//輸出下一筆資料要換行 
		if(c){
			printf("\n");
		}
	}
	return 0;
} 
