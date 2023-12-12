/*
	肈ヘ:璸衡ㄢ俱计猭秈Ω计
	Hint:1.a ㎝ b 计ぃ﹚
		 2.ㄏノㄢwhile癹伴ㄓ暗 
*/
#include<stdio.h>
#include<stdlib.h>
int Count(long, long, int, int);
int main(){
	unsigned long int a, b; //俱计计=2^30/Ωよ
	scanf("%ld %ld", &a, &b);
	while(a!=0 && b!=0){
		int c = Count(a, b, 0, 0);
		if(c == 0){
			printf("No carry operation.\n");
		}
		else{
			printf("%d carry operations.\n", c);
		}	
		scanf("%ld %ld", &a, &b);
	}	
	
} 


int Count(long a, long b, int carry, int count){
	if(a==0 && b==0 && carry==0){
		return count;
	}
		
	int  c = a%10 + b%10 + carry;
	if(c > 9){
		carry = 1;
		count++;
	}
	else{
		carry = 0;
	}
	return Count(a/10, b/10, carry, count);
}
