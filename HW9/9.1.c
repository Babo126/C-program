#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 3

int main(){
	//隨機生成a, b矩陣 
	int a[N][N], b[N][N];
	int i, j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a[i][j] = rand() % 100 + 1;
			b[i][j] = rand() % 100 + 1;
		}
	}
	//打印a矩陣 
	printf("a.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, a[i][j]);
		}
		printf("\n");
	}
	//打印b矩陣
	printf("b.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, b[i][j]);
		}
		printf("\n");
	}
	//打印相加結果 
	printf("add.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	//打印相減結果
	printf("sub.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	//打印相乘結果
	printf("multi.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, a[i][j]*b[i][j]);
		}
		printf("\n");
	}
}
