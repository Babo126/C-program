/*
	題幹: 
		輸入
		資料最多會有 2000 行
		第一行的數字 n 是宣告接下來有幾筆資料
		每一行包含國家名詞和姓名
		假設國家名詞都只有一個單字
		
		輸出
		按照字母排序將國家名稱與人數印出
		國家名稱與人數中間要以空白隔開 
*/	 

#include<stdio.h>
#include<string.h>
	
struct data{
	char country[20];
	char name[20];
};
int main(){
	
	//輸入有幾筆資料 
	int n;
	printf("People: ");
	scanf("%d", &n); 
	 
	//創建一個能儲存多筆資料 名為data的結構資料 
	struct data person[n];
	//輸入每筆資料的值 
	int i;
	for(i=0;i<n;i++){
		printf("%d:", i);
		fgets(person[i].country, sizeof(person[i].country), stdin);
        fgets(person[i].name, sizeof(person[i].name), stdin);	
		while(getchar() != '\n');
	}
	
	printf("存入:\n");
    int j;
	for (j = 0; j < n; j++) {
        printf("country: %s\n", person[j].country);
        printf("name: %s\n", person[j].name);
    }
	
	
	
}
