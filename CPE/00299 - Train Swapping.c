#include<stdio.h>
#include<stdlib.h>

int main(){
	//Ū�J���굧�� 
	int n;
	scanf("%d", &n);
	while(n--){
		//Ū�J�������� 
		int len;
		scanf("%d", &len);
		//��Ū���[�s�� 
		int i, train[len+1];
		for(i = 0;i < len; i++){
			scanf("%d", &train[i]);
		}
		//sort & count
		int j, count = 0;
		for(i = 0;i < len-1; i++){
			for(j = 0;j < len-1-i; j++){
				if(train[j] > train[j+1]){
					//�쥻�nswap��������Hcount�p�� 
					count++;
				}
			}
		}
		//output 
		printf("Optimal train swapping takes %d swaps.", count);
		if(n != 0){
			printf("\n");
		}
	}
}
