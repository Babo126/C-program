#include<stdio.h>
#include<math.h>

int main(){
	//��ɱ���:�̦h�u��3000�ӼƦr 
	int arr[3000];
	//�s�W�@�Ӱ��j���p�ư}�C�A�H�K�X�{�L�j���۴�� 
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
		//��������ƥئs�Jcount 
		for(i = 0;i < n-1; i++){
			count[abs(arr[i] - arr[i+1])]++;
		}
		//�P�_�O�_��Jolly 
		int ans = 1;
		//�q1�}�l 
		for(i = 1;i < n; i++){
			if(count[i] == 0){
				ans = 0;
				break;
			}
		}
		//��X 
		if(ans == 1){
			printf("Jolly\n");
		}
		else{
			printf("Not Jolly\n");
		}
	}
}
