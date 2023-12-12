#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isPrime(int n);
int isEmirp(int n);
int main(){
	int N;
	while(scanf("%d", &N) != EOF){
		int ans = isPrime(N);
		if(ans == 1){
			int check = isEmirp(N);
			if(check == 1){
				printf("%d is emirp\n", N);
			}
			else{
				printf("%d is prime\n", N);
			}
		}
		else{
			printf("%d is not prime\n", N);
		}
	}
}

int isPrime(int n){
	if(n <= 1){
		return 0;
	}
	else{
		int i;
		for(i = 2;i <= n/2;i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}

int isEmirp(int n){
	char strN[100], strM[100];
	//數字N轉為字串strN 
	itoa(n, strN, 10);
	int i, j = strlen(strN)-1;
	//反轉字串strN並存入strM 
	for(i = 0;i < strlen(strN); i++){
		strM[i] = strN[j--];
	} 
	strM[i++] = '\0';
	//字串strM轉為數字m 
	int m = atoi(strM);
	//檢查是否為質數 
	return isPrime(m);
}
