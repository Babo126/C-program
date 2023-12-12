#include<stdio.h>

int main(){
	//testcase
	int t;
	scanf("%d", &t);
	//input the matrix
	int k;
	for(k = 1;k <= t;k++){
		int N;
		printf("N = ");
		scanf("%d", &N);
		
		//using 1d-array
		long long int matrix[N*N];
		int i;
		for(i = 0;i < N*N; i++){
			scanf("%lld", &matrix[i]);
		}
		
		//palindrome check
		int j;
		int ans = 1;
		for(i = 0, j = N*N-1;i != j; i++, j--){
			//printf("i=%d, %d\nj=%d, %d\n", i, matrix[i], j, matrix[j]);
			if(matrix[i] < 0 || matrix[i] != matrix[j]){
				//printf("i=%d, j = %d\n", i, j);
				ans = 0;
				break;
			}
		}
		//output
		printf("Test #%d: ", k);
		if(ans == 1){
			printf("Symmetric.\n");
		}
		else{
			printf("Non-symmetric.\n");
		}
	}
}
