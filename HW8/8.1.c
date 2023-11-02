#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N 100

void Sort(int*); 
int main(){
	int num[N];
	int mode;
	float mean, median, standard;
	int i, j;
	
	srand(time(NULL));
	//賦值 
	int sum = 0;
	for(i=0;i<N;i++){
		num[i]  = rand() % 50 + 1;
		sum += num[i];
	}
	
	//記數
	int count[50] = {0};
	for(i=0;i<N;i++){
		for(j=0;j<50;j++){
			if(num[i] == j+1){
				count[j]++;
			}
		}
	}
	
	
	//mean
	mean = sum / N;
	
	
	//mode
	mode = count[0];
	for(i=0;i<50;i++){
		if(count[i] > mode){
			mode = count[i];
		}
	} 
	
	
	//median
	int tmp[N];
	for(i=0;i<N;i++){
		tmp[i] = num[i];
	}
	Sort(tmp);
	if(N%2 == 0){
		median = ((float)tmp[N/2] + (float)tmp[N/2-1]) / 2;
	}
	else{
		median = (float)tmp[N/2];
	}
	
	//standard devitation
	float sdSum = 0; 
	for(i=0;i<N;i++){
		sdSum += (num[i]-mean) * (num[i]-mean);
	}
	
	standard = sqrt(sdSum);
	
	//打印結果 
	printf("%3d ", num[0]);
	for(i=1;i<N;i++){
		if(i%10 == 0){
			printf("\n");
		}
		printf("%3d ", num[i]);
	}
	printf("\n\n");
	
	
	printf("  1:%3d ", count[0]);
	for(i=1;i<50;i++){
		if(i%5 == 0){
			printf("\n");
		}
		printf("%3d:%3d ", i+1, count[i]);
	}
	
	printf("\n\n");
	printf("Mean: %f\n", mean);
	printf("Mode: %d\n", mode);
	printf("Median: %f\n", median);
	printf("Standard Deviation: %f", standard);
	
} 

void Sort(int *a){
	int i, j;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

