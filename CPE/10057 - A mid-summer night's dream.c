/*
	�D�خ֤�:�D�X�ƦC�Τ@��h�ƭ�A��A�������
	�åB�ۥ[���᪺�̤p�ȡC 
	��J:�h������n
	��X:�ھڬ�������L�X
			�̤p�����
			�ƦC�����X�Ӽƭȵ��󤤦��
			����Ʀ��X�ؼƭ� 
*/

#include<stdio.h>
#include<stdlib.h> 
#define MAX 1000000

int main(){
	int t, n; //t for testcase
	
	//��J���h�ִ��� 
	printf("Enter case: ");
	scanf("%d", &t);
	
	while(t--){
		//��J����n���ƭ� 
		scanf("%d", &n); 
		
		if(n>MAX){
			return -1;
			break;
		}
		
		//�l���j�� 
		getchar();

		//��J�C�@�����ꪺ�� 
		int i;
		int arr[n];
		for(i=0;i<n;i++){
			scanf("%d", &arr[i]);
		}
		
		//�Ƨ�
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
		
		
		//�D�X�����, �Y���_�Ʈ�, m1=m2; m for medium
		int m1 = (arr[(n - 1) / 2]);
		int m2 = arr[n / 2];
		
		
		//�έp���h�֭ӼƦr�򤤦�Ƥ@�� 
		int samNum = 0; 
		int l;
		for(l=0;l<n;l++){
			if(arr[l] == m1 || arr[l] == m2){
				samNum += 1;
			}
		}
		
		//�p�⤤��ƥi�઺�ƭ�
		int possibleNum =  abs(m1 - m2) + 1;
		
		//�L�X���G
		printf("%d, %d, %d", m1, samNum, possibleNum);
		printf("\n");
	}
}
