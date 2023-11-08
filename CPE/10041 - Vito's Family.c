#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 30000

int main(){
	int testCase, r;
	int arr[MAX];
	int medium = 0, ans;
	//取得有幾筆測資
	printf("Enter case: ");
	scanf("%d", &testCase);
	
	//重複讀取每一筆測資 
	while(testCase--){
		//輸入有幾個親戚 
		scanf("%d", &r);
		
		//輸入值是否在範圍內 
		if(r<0 || r>500){
			printf("Error!");
		}
		
		//輸入每一個親戚的位置 
		int i;
		for(i=0;i<r;i++){
			scanf("%d", &arr[i]);
		}
		
		//排序
		int j, k;
		for(j=0;j<r;j++){
			for(k=0;k<r-j-1;k++){
				if(arr[k]>arr[k+1]){
					int temp = arr[k];
					arr[k] = arr[k+1];
					arr[k+1] = temp;
				}
			}
		} 
		
		//求出中位數(vito的位置) 
		if(r%2 == 1){ //奇數 
			medium = arr[r/2]; 
		}
		else{ //偶數 
			medium = (arr[r/2]+arr[r/2 - 1])/2;
		}
		
		//輸出資料:vito跟其他親戚的總距離 
		ans = 0;
		int l;
		for(l=0;l<r;l++){
			ans = ans + abs(arr[l] - medium);
		}
		printf("%d\n", ans);
	} 
}
