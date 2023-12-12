#include<stdio.h>
#include<stdlib.h>

int main(){
	//讀入測資筆數 
	int n;
	scanf("%d", &n);
	while(n--){
		//讀入火車長度 
		int len;
		scanf("%d", &len);
		//取讀車廂編號 
		int i, train[len+1];
		for(i = 0;i < len; i++){
			scanf("%d", &train[i]);
		}
		//sort & count
		int j, count = 0;
		for(i = 0;i < len-1; i++){
			for(j = 0;j < len-1-i; j++){
				if(train[j] > train[j+1]){
					//原本要swap的部分改以count計數 
					count++;
				}
			}
		}
		//output 
		printf("Optimal train swapping takes %d swaps.", count);
		if(n != 0){
			printf("\n");
		}
	}
}
