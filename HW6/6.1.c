#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isPrime(int);
int isCirPrime(int);

int main(){
	int i, j;
	int count = 0;
	printf("Please input a range[i, j]: ");
	while(scanf("%d %d", &i, &j) != EOF){
		if(i<10 || j>200000){
			printf("Wrong Input.\n");
			continue;
		}
		
		int k;
		for(k=i;k<j;k++){
			if(isPrime(k)){
				if(isCirPrime(k)){
					count++;
				}
			}
		}
		
		if(count == 0){
			printf("No Circular Primes.\n");
		}
		else{
			printf("%d Circular Primes.\n", count);
		}
		
		printf("Please input a range[i, j]: ");
	}
} 

int isPrime(int n){
	int i;
	if(n == 1){
		return 0;
	}	
	for(i=2;i*i<=n;i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}


int isCirPrime(int n){
	//�p�⦳�X���
	int i = n; //���� 
	int num = 0; //��� 
	while(i > 0){
		num++;
		i/=10;
	} 
	
	//�Y��n��ơA�h�|�`��n�� 
	int j;
	int k = n;
	for(j=0;j<num;j++){
		//�ܦ��U�@�Ӵ`���� 
		int tmp = k % 10;
		k = k/10 + tmp * pow(10, num-1);
		
		//�Y���`���ƫD��ơA�h�^��false 
		if(!isPrime(k)){
			return 0;
		} 
	}
	return 1;
}
