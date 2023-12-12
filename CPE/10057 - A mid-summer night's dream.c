/*
	肈ヘみ:―计参搭计A荡癸
	ぇ程 
	块:掸代戈n
	块:沮掸代戈
			程い计
			计いΤ碭计单い计
			い计Τ碭贺计 
*/

#include<stdio.h>
#include<stdlib.h> 
#define MAX 1000000

int main(){
	int t, n; //t for testcase
	
	//块Τぶ代戈 
	printf("Enter case: ");
	scanf("%d", &t);
	
	while(t--){
		//块代戈n掸计 
		scanf("%d", &n); 
		
		if(n>MAX){
			return -1;
			break;
		}
		
		//Μ癹ó 
		getchar();

		//块–掸代戈 
		int i;
		int arr[n];
		for(i=0;i<n;i++){
			scanf("%d", &arr[i]);
		}
		
		//逼
		int j, k;
		for(j=0;j<n;j++){
			for(k=0;k<n-j-1;k++){
				if(arr[k]>arr[k+1]){
					int temp = arr[k];
					arr[k] = arr[k+1];
					arr[k+1] = temp;
				}
			}
		}
		
		
		//―い计, 璝计, m1=m2; m for medium
		int m1 = (arr[(n - 1) / 2]);
		int m2 = arr[n / 2];
		
		
		//参璸Τぶ计蛤い计妓 
		int samNum = 0; 
		int l;
		for(l=0;l<n;l++){
			if(arr[l] == m1 || arr[l] == m2){
				samNum += 1;
			}
		}
		
		//璸衡い计计
		int possibleNum =  abs(m1 - m2) + 1;
		
		//挡狦
		printf("%d, %d, %d", m1, samNum, possibleNum);
		printf("\n");
	}
}
