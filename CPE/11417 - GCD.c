#include<stdio.h>
#include<stdlib.h>

int main(){
	int N;
	while(scanf("%d", &N) != EOF){
		if(N == 0){
			break;
		}
		//count total gcd
		int i, j, sum = 0;
		for(i = 1;i < N; i++){
			for(j = i+1; j <= N; j++){
				sum += gcd(i, j);
			}
		}
		//output
		printf("%d\n", sum);
	}
}

int gcd(int m, int n){
	if(m < n){
		int tmp = m;
		m = n;
		n = tmp;
	}
	
	while(m%n != 0){
		int tmp = n;
		n = m % n;
		m = tmp;
	}
	return n;
}
