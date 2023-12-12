#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char a[1001] = {0};
	char b[1001] = {0};
	int countA[123] = {0};
	int countB[123] = {0}; //'a' = 97;'z' = 122
	
	while(1){
		gets(a);
		gets(b);
		int i;
		
		//参璸aいダ瞷Ω计 
		for(i = 0;i < strlen(a);i++){
			if(a[i] >= 'a' && a[i] <= 'z'){
				countA[a[i]]++;
			}
		}
		
		//参璸bいダ瞷Ω计 
		for(i = 0;i < strlen(b);i++){
			if(b[i] >= 'a' && b[i] <= 'z'){
				countB[b[i]]++;
			}
		}
		
		
		//ǐ砐,狦瞷碞ゴ
		int j = 0;
		for(i = 0;i < 123;i++){
			if(countA[i] > 0 && countB[i] > 0){
				if(countA[i] == countB[i]){
					for(j = 0;j < countA[i];j++){
						printf("%c", i);
					}
				}
				else if(countA[i] > countB[i]){
					for(j = 0;j < countB[i];j++){
						printf("%c", i);
					}
				}
				else if(countA[i] < countB[i]){
					for(j = 0;j < countA[i];j++){
						printf("%c", i);
					}
				}		
			} 
		}
		
		
		//﹍て﹃:memset材把计璶ㄏノsizeof砞竚
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(countA, 0, sizeof(countA));
		memset(countB, 0, sizeof(countB));
		/*
		  冈灿:
		   memset ㄏノい材把计琌璶砞竚竊计癸 countA 
		  ㎝ countB 皚ㄓ弧眤惠璶砞竚琌俱皚竊虫
		  硂種帝莱赣ㄏノ sizeof(countA) ㎝ sizeof(countB) 材
		  把计τぃ琌皚 123讽ㄏノ memset(countA, 0, 123); 
		  ﹍て countA 玡 123 竊パ countA 琌俱计皚
		  –俱计计瞷╰参 4 竊硂種帝Τ countA 皚
		  玡 123/4 =  30 俱计砆タ絋﹍て 0ㄤ緇俱计ゼ砆﹍て
		*/ 
		
		i = 0;
		j = 0;
		
		printf("\n"); 
	} 
	
	return 0;
}
