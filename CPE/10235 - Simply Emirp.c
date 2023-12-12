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
	//�ƦrN�ର�r��strN 
	itoa(n, strN, 10);
	int i, j = strlen(strN)-1;
	//����r��strN�æs�JstrM 
	for(i = 0;i < strlen(strN); i++){
		strM[i] = strN[j--];
	} 
	strM[i++] = '\0';
	//�r��strM�ର�Ʀrm 
	int m = atoi(strM);
	//�ˬd�O�_����� 
	return isPrime(m);
}
