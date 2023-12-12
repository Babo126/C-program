/*
	�D��:�p��i, j�����Ҧ��Ʀr���`�����ת��̤j��(�]�t���)
	Hint:�`�Ni, j�j�p
*/

#include<stdio.h>

int maxCycleLength(int);
void swap(int, int);
int main(){
	int i, j;
	while(scanf("%d %d", &i, &j) != EOF){
		int k;
		int max = 0;
		if(i>j){
			swap(i, j);
		}
		
		for(k=i;k<=j;k++){
			int m = maxCycleLength(k);
			//printf("m=%d\n", m);
			if(m>max){
				max = m;
			}		
		}
		
		printf("max=%d\n", max);
	}
} 

int maxCycleLength(int n){
	int count=0;
	while(n != 1){
		//printf("%d ", n);
		count++;
		if(n%2 != 0){
			n = 3*n+1;
		}
		else{
			n = n/2;
		}
	}
	
	//printf("count = %d\n", count+1);
	return count+1;
}

void swap(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}
