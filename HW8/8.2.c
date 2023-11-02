#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N 100

void Sort(int*, int); 
int main(){
	int num[N];
	int odd[N], even[N];
	int i, j = 0, k = 0;
	
	srand(time(NULL));
	//賦值 
	int sum = 0;
	for(i=0;i<N;i++){
		num[i]  = rand() % 50 + 1;
		//分類 
		if(num[i]%2 != 0){
			odd[j] = num[i];
			j++;
		}
		else{
			even[k] = num[i];
			k++;	
		}
	}
	
	//Sort
	Sort(odd, j);
	Sort(even, k);
	
	//打印結果
	printf("odd:\n");
	printf("%3d ", odd[0]); 
	for(i=1;i<j;i++){
		if(i%10 == 0){
			printf("\n");
		}
		printf("%3d ", odd[i]);
	}
	
	printf("\n\neven:\n");
	printf("%3d ", even[0]); 
	for(i=1;i<k;i++){
		if(i%10 == 0){
			printf("\n");
		}
		printf("%3d ", even[i]);
	}
	
} 

void Sort(int *a, int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

