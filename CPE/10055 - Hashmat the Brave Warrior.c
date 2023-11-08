/*
	題目:計算兩組士兵的人數差距 
	Hint: 1.使用long long int型態宣告 
		  2.使用abs()函數 
*/

#include<stdio.h>
#include<math.h>

int main(){
	long long int a, b; 
	while(scanf("%lld %lld", &a, &b) != EOF){
		printf("%d\n", abs(a-b));
	}
} 
