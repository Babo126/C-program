#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char a[1001] = {0};
	char b[1001] = {0};
	int countA[123] = {0};
	int countB[123] = {0}; //'a' = 97;'z' = 122
	
	while(1){
		gets(a);
		gets(b);
		int i;
		
		//�έpa���r���X�{������ 
		for(i = 0;i < strlen(a);i++){
			if(a[i] >= 'a' && a[i] <= 'z'){
				countA[a[i]]++;
			}
		}
		
		//�έpb���r���X�{������ 
		for(i = 0;i < strlen(b);i++){
			if(b[i] >= 'a' && b[i] <= 'z'){
				countB[b[i]]++;
			}
		}
		
		
		//���X,�p�G�@�P�X�{�N���L
		int j = 0;
		for(i = 0;i < 123;i++){
			if(countA[i] > 0 && countB[i] > 0){
				if(countA[i] == countB[i]){
					for(j = 0;j < countA[i];j++){
						printf("%c", i);
					}
				}
				else if(countA[i] > countB[i]){
					for(j = 0;j < countB[i];j++){
						printf("%c", i);
					}
				}
				else if(countA[i] < countB[i]){
					for(j = 0;j < countA[i];j++){
						printf("%c", i);
					}
				}		
			} 
		}
		
		
		//��l�Ʀr��:memset���ĤT�ӰѼƭn�ϥ�sizeof�]�m
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(countA, 0, sizeof(countA));
		memset(countB, 0, sizeof(countB));
		/*
		  �Բӭ�]��]�p�U:
		  �b memset ���ϥΤ��A�ĤT�ӰѼƬO�n�]�m���r�`�ơC��� countA 
		  �M countB �}�C�ӻ��A�z�ݭn�]�m���O��Ӱ}�C���j�p�A�H�r�`�����C
		  �o�N���ۡA���Өϥ� sizeof(countA) �M sizeof(countB) �@���ĤT��
		  �ѼơA�Ӥ��O�}�C������ 123�C��ϥ� memset(countA, 0, 123); �ɡA
		  �u��l�ƤF countA ���e 123 �Ӧr�`�C�ѩ� countA �O�@�Ӿ�ư}�C�A
		  �C�Ӿ�Ʀb�j�h�Ʋ{�N�t�ΤW�e 4 �Ӧr�`�A�o�N���ۥu�� countA �}�C
		  ���e 123/4 = �� 30 �Ӿ�ƳQ���T��l�Ƭ� 0�A��l����ƥ��Q��l�ơC
		*/ 
		
		i = 0;
		j = 0;
		
		printf("\n"); 
	} 
	
	return 0;
}
