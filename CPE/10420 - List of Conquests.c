/*
	�D�F: 
		��J
		��Ƴ̦h�|�� 2000 ��
		�Ĥ@�檺�Ʀr n �O�ŧi���U�Ӧ��X�����
		�C�@��]�t��a�W���M�m�W
		���]��a�W�����u���@�ӳ�r
		
		��X
		���Ӧr���ƧǱN��a�W�ٻP�H�ƦL�X
		��a�W�ٻP�H�Ƥ����n�H�ťչj�} 
*/	 

#include<stdio.h>
#include<string.h>
	
struct data{
	char country[20];
	char name[20];
};
int main(){
	
	//��J���X����� 
	int n;
	printf("People: ");
	scanf("%d", &n); 
	 
	//�Ыؤ@�ӯ��x�s�h����� �W��data�����c��� 
	struct data person[n];
	//��J�C����ƪ��� 
	int i;
	for(i=0;i<n;i++){
		printf("%d:", i);
		fgets(person[i].country, sizeof(person[i].country), stdin);
        fgets(person[i].name, sizeof(person[i].name), stdin);	
		while(getchar() != '\n');
	}
	
	printf("�s�J:\n");
    int j;
	for (j = 0; j < n; j++) {
        printf("country: %s\n", person[j].country);
        printf("name: %s\n", person[j].name);
    }
	
	
	
}
