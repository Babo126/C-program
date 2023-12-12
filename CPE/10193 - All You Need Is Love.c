#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int gcd(int m, int n);
int main(){
	int N, c;
	scanf("%d", &N);	
	for(c = 1;c <= N; c++){
		char s1[31], s2[31];
		getchar();
		fgets(s1, 31, stdin);
		fgets(s2, 31, stdin);
		//2 -> 10 進位
		int i, dec1 = 0, j = strlen(s1)-2;
		for(i = 0;i < strlen(s1)-1; i++){
			if(s1[i] == '1'){
				dec1 += pow(2, j);
			}
			j--;
		}
		int dec2 = 0;
		j = strlen(s2)-2;
		for(i = 0;i < strlen(s1)-1; i++){
			if(s2[i] == '1'){
				dec2 += pow(2, j);
			}
			j--;
		}
		//最大公因數
		int g = gcd(dec1, dec2);
		if(g > 1){
			printf("Pair #%d: All you need is love!", c);
		}
		else{
			printf("Pair #%d: Love is not all you need!", c);
		}
		
		if(c != N){
			printf("\n");
		}
	}
}

int gcd(int m, int n){
	if(m < n){
		int tmp = m;
		m = n;
		n = tmp;
	}
	
	if(n == 0){
		return m;
	}
	else{
		return gcd(n, m%n);
	}
}
