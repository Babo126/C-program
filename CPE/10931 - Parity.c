#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		if(n == 0){
			break;
		} 
		//�ഫ�G�i��ðO��1���ƶq 
		int tmp = n;
		int count = 0;
		//�ΨӰO���G�i��Ʀr 
		int bi[100] = {0};
		int i = 0; 
		while(tmp != 0){
			if(tmp%2 == 1){
				count++;
			}
			bi[i++] = tmp % 2;
			tmp /= 2;	
		}
		i--; //�h�X�@��i 
		//output
		printf("The parity of ");
		int j;
		for(j = i;j >= 0; j--){
			printf("%d", bi[j]);
		}
		printf(" is %d(mod 2)\n", count);
	}
}
