#include<stdio.h>
#include<stdlib.h>

int main(){
	long int n, m;
	while(scanf("%d %d", &n, &m) != EOF){
		if(n < 1 || m < 1){
			continue;
		}
		
		int i = 0, arr[500];
		while(n > 0 && n%m == 0){
			arr[i++] = n;
			n /= m;
		}
		
		if(n == 1){
			arr[i] = 1;
			int j;
			for(j = 0;j <= i; j++){
				printf("%d ", arr[j]);
			}
			printf("\n");
		}
		else{
			printf("Boring!\n");
		}
	}
}
