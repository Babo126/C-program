#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 3

int main(){
	int a[N][N], b[N][N];
	
	srand(time(NULL));
	
	//�üƥͦ��x�}a, b�������ƭ� 
	int i, j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a[i][j] = rand() % 100 + 1;
			b[i][j] = rand() % 100 + 1;
		}
	}
	 
	//���L�x�}a 
	printf("a.\n");
	for(i=0;i<N;i++){
		printf("[");
		for(j=0;j<N;j++){
			printf("% 4d ", a[i][j]);
		}
		printf("]\n");
	}
	
	//���L�x�}b 
	printf("b.\n");
	for(i=0;i<N;i++){
		printf("[");
		for(j=0;j<N;j++){
			printf("% 4d ", b[i][j]);
		}
		printf("]\n");
	}
	
	//Add
	int add[N][N] = {0};
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			add[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Add.\n");
	for(i=0;i<N;i++){
		printf("[");
		for(j=0;j<N;j++){
			printf("% 4d ", add[i][j]);
		}
		printf("]\n");
	}
	
	//Mul
	int mul[N][N] = {0};
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			mul[i][j] = a[i][j] - b[i][j];
		}
	}
	
	printf("Mul.\n");
	for(i=0;i<N;i++){
		printf("[");
		for(j=0;j<N;j++){
			printf("% 4d ", mul[i][j]);
		}
		printf("]\n");
	}
}

