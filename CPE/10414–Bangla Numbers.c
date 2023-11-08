/*
	�D��:�Ψ�L�r�ӥN���i�� 
	Hint:�ѩ����̤j��15��ơA�n�ϥ�long���A 
*/

#include<stdio.h>
#define K 10000000
#define L 100000
#define H 1000
#define S 100
int main(){
	long n;
	int kuti=0, lakh=0, hajar=0, shata=0;
	while(scanf("%d", &n) != EOF){
		if(n > K){
			kuti = n/K;
			n %= K;
		}
		if(n > L){
			lakh = n/L;
			n %= L;
		}
		if(n > H){
			hajar = n/H;
			n %= H;
		}
		if(n > S){
			shata = n/S;
			n %= S;
		}
		
		if(kuti>0){
			printf("%d kuti ", kuti);
		}
		if(lakh>0){
			printf("%d lakh ", lakh);
		}
		if(hajar>0){
			printf("%d hajar ", hajar);
		}
		if(shata>0){
			printf("%d shata ", shata);
		}
		if(n>0){
			printf("%d\n", n);
		}
	}
} 
