#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		//�έp�̲׳ܥi�ּƶq�A��l�Ȭ��@�}�l�֦��i�ּ� 
		int count = n; 
		//�P�_�O�_�j��T�~ 
		while(n >= 3){
			//�p��i�H�������i�ּƶq
			int change = n / 3;
			//�p��ѤU�L�k�����i�ּƶq
			int remain = n % 3;
			//��s�έp:�[�W���^�Ӫ��ƶq
			count += change;
			//��s�ثe�i�ּƶq
			n = change + remain; 
		}
		
		//�P�_�ثe�i�ּƶq�O�_��2
		if(n == 2){
			//�ɤ@�~
			count += 1; 
		} 
		
		//output
		printf("%d\n", count);
	}
}
