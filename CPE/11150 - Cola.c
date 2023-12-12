#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		//参璸程沧耻贾计秖﹍秨﹍局Τ贾计 
		int count = n; 
		//耞琌瞺 
		while(n >= 3){
			//璸衡传贾计秖
			int change = n / 3;
			//璸衡逞礚猭传贾计秖
			int remain = n % 3;
			//穝参璸:传ㄓ计秖
			count += change;
			//穝ヘ玡贾计秖
			n = change + remain; 
		}
		
		//耞ヘ玡贾计秖琌2
		if(n == 2){
			//瞺
			count += 1; 
		} 
		
		//output
		printf("%d\n", count);
	}
}
