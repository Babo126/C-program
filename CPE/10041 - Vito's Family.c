#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 30000

int main(){
	int testCase, r;
	int arr[MAX];
	int medium = 0, ans;
	//���o���X������
	printf("Enter case: ");
	scanf("%d", &testCase);
	
	//����Ū���C�@������ 
	while(testCase--){
		//��J���X�ӿ˱� 
		scanf("%d", &r);
		
		//��J�ȬO�_�b�d�� 
		if(r<0 || r>500){
			printf("Error!");
		}
		
		//��J�C�@�ӿ˱�����m 
		int i;
		for(i=0;i<r;i++){
			scanf("%d", &arr[i]);
		}
		
		//�Ƨ�
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
		
		//�D�X�����(vito����m) 
		if(r%2 == 1){ //�_�� 
			medium = arr[r/2]; 
		}
		else{ //���� 
			medium = (arr[r/2]+arr[r/2 - 1])/2;
		}
		
		//��X���:vito���L�˱����`�Z�� 
		ans = 0;
		int l;
		for(l=0;l<r;l++){
			ans = ans + abs(arr[l] - medium);
		}
		printf("%d\n", ans);
	} 
}
