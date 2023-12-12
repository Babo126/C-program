/*
	�D��:�P�_�O�_��11������ 
	Hint:1.����|�X�{�۷�j����ơA�]���L�k�H�Ʀr���A�x�s
		 2.���X�r�ꪺ�C�@�Ӧr�����ন�Ʀr
		 3.����:
		 		�_��(���H2�l1)��Ʀr�M
				����(���H2�l0)��Ʀr�M
				��̬۴�ƭȨӧP�_�O�_��11������  
*/

#include<stdio.h>
#include<string.h>

int checkEleven(char num[]){
	int len = strlen(num); //�P�_�r����� 
	int oddSum = 0, evenSum = 0;
	
	int i;
	for(i=0;i<len;i++){
		if(i%2 == 0){
			oddSum += (num[i] - '0'); //num[i]-'0'�O�N����q�r���ন�Ʀr(ASCII�X) 
		}
		else{
			evenSum += (num[i] - '0');
		}
	}
	
	return (oddSum - evenSum) % 11 == 0; //�p�G�O11�����ƫh�^��True 
}

int main(){
	char n[1001];
	while(1){
		scanf("%s", n);
		if(strcmp(n, "0") == 0){ //�Yn="0"�h�|�^��0��ܨ�r��@�P //"0"��ܦr��,'0'��ܦr�� 
			break;
		}
		
		if(checkEleven(n)){
			printf("%s is a multiple of 11.\n", n);
		}
		else{
			printf("%s is not a multiple of 11.\n", n);
		}
	}
	
	return 0;
	
}
