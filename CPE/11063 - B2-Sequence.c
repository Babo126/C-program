#include<stdio.h>

int main(){
	//t for testcase 
	int n, t = 1;
	while(scanf("%d", &n) != EOF){
		int a[n];
		int i;
		for(i = 0;i < n; i++){
			scanf("%d", &a[i]);
		}
		
		//�ϥ�b2�}�C�x�s�۴���G
		//a[i]+a[j]�̤j��20000 
		int b2[20001] = {0};
		//ans�ΨӰO���O�_��B2-sequence 
		int ans = 1, j;
		for(i = 0;i < n; i++){
			for(j = i;j < n; j++){
				int result = a[i] + a[j];
				//a[i] > a[j]:�D�Ѥp�ܤj�Ƨ�
				//b2[result] != 0:�w�g�X�{�L�ۥ[�����G 
				if(a[i] > a[j] || b2[result] != 0){
					ans = 0;
					break;
				}
				else{
					b2[result]++;
				}
			}
		}
		
		printf("Case #%d: ", t);
		if(ans == 1){
			printf("It is a B2-sequence.\n\n");
		}
		else{
			printf("It is not a B2-sequence.\n\n");
		}
		
		t++;
	}
}
