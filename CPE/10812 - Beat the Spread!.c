#include<stdio.h>

int main(){
	//testcase
	int t;
	scanf("%d", &t);
	
	while(t--){
		//each line has two data
		int sum, min;
		scanf("%d %d", &sum, &min);
		int a, b;
		/*
			a + b = sum;
			a - b = min;
			>> 2a = (sum+min)/2;
		*/
		a = (sum + min) / 2;
		b = sum - a;
		if(a < 0 || b < 0){
			printf("impossible");
		}
		else{
			printf("%d %d", a, b);
			
		}
		//最後一行不用換行 
		if(t != 0){
				printf("\n");
			}
	}
}
