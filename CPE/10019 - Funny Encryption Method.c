#include<stdio.h>
#include<stdlib.h>
 
int main(){
	int N, i;
	//0 < N <= 1000 >> N至多只有1000比測資 
	int M[1000];
	scanf("%d", &N);
	for(i = 0;i < N; i++){
		scanf("%d", &M[i]);
		
		//10 -> 2
		int tmp = M[i];
		int count = 0;
		while(tmp != 0){
			//只要出現1就計數count++ 
			if(tmp%2 == 1){
				count++;
			}
			tmp /= 2;
		}
		
		printf("%d ", count);
		
		//10 -> 16
		tmp = M[i];
		//0 < M <= 9999 >>至多四位數 
		int a4 = 0, a3 = 0, a2 = 0, a1 = 0, aHEX;
		a4 = tmp / 1000;
		a3 = (tmp % 1000) / 100;
		a2 = ((tmp % 1000) % 100) / 10;
		a1 = tmp % 10;
		aHEX = a1 + a2*16 + a3*16*16 + a4*16*16*16;
		
		//16 -> 2
		tmp = aHEX;
		count = 0;
		while(tmp != 0){
			if(tmp%2 == 1){
				count++;
			}
			tmp /= 2;
		}
		printf("%d\n", count);
	}
}
