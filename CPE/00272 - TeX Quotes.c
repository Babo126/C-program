#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[100];
	//�ϥ�flag�ӰO�����޸��O��1���٬O��2�� 
	int flag = 0;
	//��getsŪ���r�� 
	while(gets(str)){
		int i;
		//���X�C�@�C���C�@�Ӧr 
		for(i = 0;i < strlen(str); i++){
			//�p�G�J�����޸� 
			if(str[i] == '\"'){
				//�B�O�Ĥ@�� 
				if(flag == 0){
					printf("``");
					flag = 1;
				}
				//�B�O�ĤG�� 
				else{
					printf("\'\'");
					flag = 0;
				}
			}
			//�_�h�����L�X 
			else{
				printf("%c", str[i]);
			}
		}
		printf("\n"); 
	}
	return 0;
}
