/*
	�D��:�p���դh�L���H�Ʈt�Z 
	Hint: 1.�ϥ�long long int���A�ŧi 
		  2.�ϥ�abs()��� 
*/

#include<stdio.h>
#include<math.h>

int main(){
	long long int a, b; 
	while(scanf("%lld %lld", &a, &b) != EOF){
		printf("%d\n", abs(a-b));
	}
} 
