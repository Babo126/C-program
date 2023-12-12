#include<stdio.h>
#include<string.h>

int main(){
	int n;
	char str[999] = {0};
	int count[91] = {0};
	int i, j;
	
	scanf("%d", &n);
	getchar(); //使用getchar()將迴車符吃掉
	
	while(n--){
		//讀取字串 
		gets(str);
		
		for(i = 0;i < strlen(str);i++){
			//小寫使用ASCII code計算次數 
			if(str[i] >= 'a' && str[i] <= 'z'){
				count[str[i] - 'a' + 'A']++;
			}
			//其餘字元直接計算次數 
			else{
				count[str[i]]++;
			}
		}
	} 
	
	//為什麼起始不給strlen(str)而是sizeof(str)?
	/*
	  解答:
	  sizeof() 可以用於任何類型的數據
	  strlen() 只能用於以空字元'\0' 結尾的字串
	  sizeof() 計算字串的長度，包含末尾的'\0'
	  strlen() 計算字串的長度，不包含字串末尾的'\0' 
	*/ 
	
	/*
	  這裡原作者使用strlen, 而我測試之後覺得用strlen
      也可以,因為strlen實際上就是輸出原本輸入了多少個字
	  (包含空格、符號、字母，而一個字母最大就是等於Strlen的
	  長度，例如strlen=5,字串:AAAAA,那麼A有五個,以此類推。
	*/ 
	
	for(i = strlen(str);i>= 1;i--){
		//直接走訪A~Z 
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
