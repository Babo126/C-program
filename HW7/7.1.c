#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	//��X�T����
	int min; 
	int count = 0; 
	//���X�Ҧ���n�p�������H���̤p��� 
	printf("Side length of triangle:\n");
	for(min=0;min<n;min++){
		int max = n+1; //�̤j��� //�C�@�����n���]�� 
		while(min+n > max){
			printf("%d %d %d\n", min, n, max);
			max++;
			count++;
		}
	}
	
	printf("Number of triangle with n as the middle side length: %d", count);
}
