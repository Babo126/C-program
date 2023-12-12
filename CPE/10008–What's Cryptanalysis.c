#include<stdio.h>
#include<string.h>

int main(){
	int n;
	char str[999] = {0};
	int count[91] = {0};
	int i, j;
	
	scanf("%d", &n);
	getchar(); //�ϥ�getchar()�N�j���ŦY��
	
	while(n--){
		//Ū���r�� 
		gets(str);
		
		for(i = 0;i < strlen(str);i++){
			//�p�g�ϥ�ASCII code�p�⦸�� 
			if(str[i] >= 'a' && str[i] <= 'z'){
				count[str[i] - 'a' + 'A']++;
			}
			//��l�r�������p�⦸�� 
			else{
				count[str[i]]++;
			}
		}
	} 
	
	//������_�l����strlen(str)�ӬOsizeof(str)?
	/*
	  �ѵ�:
	  sizeof() �i�H�Ω�����������ƾ�
	  strlen() �u��Ω�H�Ŧr��'\0' �������r��
	  sizeof() �p��r�ꪺ���סA�]�t������'\0'
	  strlen() �p��r�ꪺ���סA���]�t�r�꥽����'\0' 
	*/ 
	
	/*
	  �o�̭�@�̨ϥ�strlen, �ӧڴ��դ���ı�o��strlen
      �]�i�H,�]��strlen��ڤW�N�O��X�쥻��J�F�h�֭Ӧr
	  (�]�t�Ů�B�Ÿ��B�r���A�Ӥ@�Ӧr���̤j�N�O����Strlen��
	  ���סA�Ҧpstrlen=5,�r��:AAAAA,����A������,�H�������C
	*/ 
	
	for(i = strlen(str);i>= 1;i--){
		//�������XA~Z 
		for(j = 'A';j <= 'Z';j++){
			if(count[j] == 0){
				continue;
			}
			else if(count[j] == i){
				printf("%c %d", j, i);
				if(j != 'Z'){
					printf("\n");
				}
			}
		}
	}
	
	return 0;
}
