#include<stdio.h>

int main(){
	//測資筆數 
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d\n%d", &a, &b);
		//判斷奇數 
		int i, sum = 0;
		for(i = a;i <= b; i++){
			if(i % 2 == 1){
				sum += i;
			}
		}
		printf("%d", sum);
		//格式化輸出 
		if(t != 0){
			printf("\n");
		}
	}
}
