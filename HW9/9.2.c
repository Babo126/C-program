#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	int fl, sl;
	printf("Firset array length:\n");
	scanf("%d", &fl);
	printf("Second array length:\n");
	scanf("%d", &sl);
	
	srand(time(NULL));
	
	int i, j, tmp;
	int f[fl+1], s[sl+1];
	
	//First
	printf("First array:[ ");
	for(i=0;i<fl;i++){
		f[i] = rand() % 21;
		printf("%d ", f[i]);
	}	
	printf("]\n");
	
	printf("After Bubble Sort:[ ");
	for(i=0;i<fl-1;i++){
		for(j=i+1;j<fl;j++){
			if(f[i] > f[j]){
				tmp = f[i];
				f[i] = f[j];
				f[j] = tmp;
			}
		}
	}
	for(i=0;i<fl;i++){
		printf("%d ", f[i]);
	}	
	printf("]\n"); 
	
	//Second
	printf("Second array:[ ");
	for(i=0;i<sl;i++){
		s[i] = rand() % 21;
		printf("%d ", s[i]);
	}	
	printf("]\n");
	
	printf("After Insertion Sort:[ ");
	for(i=1;i<sl;i++){
		tmp = s[i];
		for(j=i-1;j>=0;j--){
			if(s[j] > tmp){
				s[j + 1] = s[j];
			}
			else{
				break;
			}
		}
		s[j + 1] = tmp; //最後因為是前面sorted的部分中有空格,所以是j+1不是i+1 
	}
	for(i=0;i<sl;i++){
		printf("%d ", s[i]);
	}	
	printf("]\n");
	
	//Merge and sorting
	printf("After merge and sorting:[ ");
	int merge[fl+sl+1];
	i=0;
	j=0;
	int k=0;
	while(i<fl && j<sl){
		if(f[i] < s[j]){
			merge[k++] = f[i++];
		}
		else{
			merge[k++] = s[j++];
		}
	}
	
	//當比較完所有元素後，i, j仍然不等於陣列長表示還有元素沒有放入merge陣列 
	while(i<fl){
		merge[k++] = f[i++];
	}
	
	while(j<sl){
		merge[k++] = s[j++];
	}
	
	for(i=0;i<fl+sl;i++){
		printf("%d ", merge[i]);
	}
	printf("]");
}
