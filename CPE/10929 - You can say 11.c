/*
	題目:判斷是否為11的倍數 
	Hint:1.測資會出現相當大的資料，因此無法以數字型態儲存
		 2.取出字串的每一個字元並轉成數字
		 3.公式:
		 		奇數(除以2餘1)位數字和
				偶數(除以2餘0)位數字和
				兩者相減的數值來判斷是否為11的倍數  
*/

#include<stdio.h>
#include<string.h>

int checkEleven(char num[]){
	int len = strlen(num); //判斷字串長度 
	int oddSum = 0, evenSum = 0;
	
	int i;
	for(i=0;i<len;i++){
		if(i%2 == 0){
			oddSum += (num[i] - '0'); //num[i]-'0'是將其轉從字元轉成數字(ASCII碼) 
		}
		else{
			evenSum += (num[i] - '0');
		}
	}
	
	return (oddSum - evenSum) % 11 == 0; //如果是11的倍數則回傳True 
}

int main(){
	char n[1001];
	while(1){
		scanf("%s", n);
		if(strcmp(n, "0") == 0){ //若n="0"則會回傳0表示兩字串一致 //"0"表示字串,'0'表示字元 
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
