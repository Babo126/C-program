#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 3

int main(){
	//�H���ͦ�a, b�x�} 
	int a[N][N], b[N][N];
	int i, j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a[i][j] = rand() % 100 + 1;
			b[i][j] = rand() % 100 + 1;
		}
	}
	//���La�x�} 
	printf("a.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, a[i][j]);
		}
		printf("\n");
	}
	//���Lb�x�}
	printf("b.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, b[i][j]);
		}
		printf("\n");
	}
	//���L�ۥ[���G 
	printf("add.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	//���L�۴�G
	printf("sub.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	//���L�ۭ����G
	printf("multi.\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d] = %d, ", i, j, a[i][j]*b[i][j]);
		}
		printf("\n");
	}
}
