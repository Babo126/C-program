/*
	肈ヘ:耞琌11计 
	Hint:1.代戈穦瞷讽戈礚猭计篈纗
		 2.﹃–じ锣Θ计
		 3.そΑ:
		 		计(埃2緇1)计㎝
				案计(埃2緇0)计㎝
				ㄢ搭计ㄓ耞琌11计  
*/

#include<stdio.h>
#include<string.h>

int checkEleven(char num[]){
	int len = strlen(num); //耞﹃ 
	int oddSum = 0, evenSum = 0;
	
	int i;
	for(i=0;i<len;i++){
		if(i%2 == 0){
			oddSum += (num[i] - '0'); //num[i]-'0'琌盢ㄤ锣眖じ锣Θ计(ASCII絏) 
		}
		else{
			evenSum += (num[i] - '0');
		}
	}
	
	return (oddSum - evenSum) % 11 == 0; //狦琌11计玥肚True 
}

int main(){
	char n[1001];
	while(1){
		scanf("%s", n);
		if(strcmp(n, "0") == 0){ //璝n="0"玥穦肚0ボㄢ﹃璓 //"0"ボ﹃,'0'ボじ 
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
