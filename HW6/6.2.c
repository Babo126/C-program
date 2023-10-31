#include<stdio.h>
#include<stdlib.h>
#include<math.h>;

int main(){
	int m, n;
	printf("Please input a pair of integers (m, n): ");
	//連續輸入
	while(scanf("%d %d", &m, &n) != EOF){
		//錯誤值處理
		if(m == 0 && n == 0){
			printf("Wrong input, input again!\n");
			continue;
		}
		else if(m == 0){
			printf("0 is not the power of any number, input again.\n");
			continue;
		}
		//檢查m是否為n的倍數
		else{
			if(m % n == 0){
				printf("%d is the power of %d\n", m, n);
			}
			else{
				printf("%d is not the power of %d\n", m, n);
			}
		}
		
		printf("Please input a pair of integers (m, n): ");
	}
}
