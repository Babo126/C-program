#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[100];
	//使用flag來記錄雙引號是第1個還是第2個 
	int flag = 0;
	//用gets讀取字串 
	while(gets(str)){
		int i;
		//走訪每一列的每一個字 
		for(i = 0;i < strlen(str); i++){
			//如果遇到雙引號 
			if(str[i] == '\"'){
				//且是第一個 
				if(flag == 0){
					printf("``");
					flag = 1;
				}
				//且是第二個 
				else{
					printf("\'\'");
					flag = 0;
				}
			}
			//否則直接印出 
			else{
				printf("%c", str[i]);
			}
		}
		printf("\n"); 
	}
	return 0;
}
