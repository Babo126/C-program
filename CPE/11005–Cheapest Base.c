#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int t, c = 1; //t for testcase; c for case 1, 2...
	scanf("%d", &t);
	while(t--){
		printf("Case %d:\n", c);
		//Ū���C�Ӧr������ 
		int i, ink[36] = {0};
		for(i = 0; i < 36; i++){
			scanf("%d", &ink[i]);
		}
		//Ū��N�ӼƦr 
		int n;
		scanf("%d", &n);
		int *num = (int*)malloc(n * sizeof(int));
		for(i = 0;i < n; i++){
			scanf("%d", &num[i]);
		}
		//�p��C�ӼƦr���i����ഫ 
		for(i = 0;i < n; i++){
			long long int cost[37] = {0}; //�ΥH�x�s�C�Ӷi������,�̤j�O36�i��ҥH�}�C�̪���37 
			long long int min = LONG_LONG_MAX; //�̤p������l�ȳ]�w�ܤj�A�K�i�H�����Q�Ĥ@���p����N 
			//�p��2~36�i�쪺����
			int j; 
			for(j = 2;j <= 36; j++){
				int tmp = num[i]; //�Ȧs�Ʀr�H���p�� 
				//�u���k 
				while(tmp > 0){
					int pos = tmp % j; //�l�ƧY���������i���ഫ�Ʀr���� 
					cost[j] += ink[pos]; //�p�����
					tmp /= j; 
				}
				
				if(cost[j] <= min){
					min = cost[j];
				}
			}	
			
			printf("Cheapest base(s) for number %d:", num[i]);
			
			for(j = 2;j <= 36; j++){
				if(cost[j] == min){
					printf(" %d", j);
				}
			}
			printf("\n");
		}
		//�ϥΧ����n���� 
		free(num);	
		//�����O�_���̫�@��case(���δ���) 
		if(t > 0){
			printf("\n");
		}
		
		c++;
	}
	
	return 0;
} 




