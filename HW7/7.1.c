#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	//找出三角形
	int min; 
	int count = 0; 
	//走訪所有比n小的元素以找到最小邊長 
	printf("Side length of triangle:\n");
	for(min=0;min<n;min++){
		int max = n+1; //最大邊長 //每一次都要重設值 
		while(min+n > max){
			printf("%d %d %d\n", min, n, max);
			max++;
			count++;
		}
	}
	
	printf("Number of triangle with n as the middle side length: %d", count);
}
