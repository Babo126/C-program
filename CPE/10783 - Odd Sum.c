#include<stdio.h>

int main(){
	//���굧�� 
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d\n%d", &a, &b);
		//�P�_�_�� 
		int i, sum = 0;
		for(i = a;i <= b; i++){
			if(i % 2 == 1){
				sum += i;
			}
		}
		printf("%d", sum);
		//�榡�ƿ�X 
		if(t != 0){
			printf("\n");
		}
	}
}
