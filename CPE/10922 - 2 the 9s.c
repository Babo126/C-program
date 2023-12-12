#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char N[1001];
	while(fgets(N, 1001, stdin) != NULL){
		if(N[0] == '0'){
			break;
		}
		
		int degree = is9(N, 0); //0 for degree counter
		//output
		int i;
		for(i = 0;i < strlen(N); i++){
			printf("%c", N[i]);
		}
		if(degree > 0){
			printf(" is a multiple of 9 and has 9-degree %d.\n", degree);
		}
		else{
			printf(" is not a multiple of 9.\n");
		}
		
	}
}

int is9(char *n, int count){
	int i, len = strlen(n);
	//簿埃﹃ソЮ传︽才 
	if(n[len-1] == '\n'){
		n[len-1] = '\0';
		len--;
	}
	//羆┮Τ计 
	int sum = 0;
	for(i = 0;i < len; i++){
		sum += (int)n[i] - '0';
	}
	//璸衡Ч挡狦璝9计count+1 
	if(sum%9 == 0){
		count++;
		if(sum == 9){
			return count;
		}
		else{
			//recursive
			char str[10];
			sprintf(str, "%d", sum);
			return is9(str, count);
		}
	}
	else{
		return -1;
	}
} 
