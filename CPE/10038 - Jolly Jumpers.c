#include<stdio.h>
#include<math.h>

int main(){
	//邊界條件:最多只有3000個數字 
	int arr[3000];
	//新增一個夠大的計數陣列，以免出現過大的相減值 
	int count[10005];
	int n;
	while(~scanf("%d", &n)){
		int i;
		//initialize count
		for(i = 0;i < n; i++){
			count[i] = 0;
		}
		//scanf arr[i]
		for(i = 0;i < n; i++){
			scanf("%d", &arr[i]);
		}
		//把對應的數目存入count 
		for(i = 0;i < n-1; i++){
			count[abs(arr[i] - arr[i+1])]++;
		}
		//判斷是否為Jolly 
		int ans = 1;
		//從1開始 
		for(i = 1;i < n; i++){
			if(count[i] == 0){
				ans = 0;
				break;
			}
		}
		//輸出 
		if(ans == 1){
			printf("Jolly\n");
		}
		else{
			printf("Not Jolly\n");
		}
	}
}
