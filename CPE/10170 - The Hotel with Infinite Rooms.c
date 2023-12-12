#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int s, d;
	while(~scanf("%d %d", &s, &d)){
		while(d > 0){
			d -= s;
			s++;
		}
		
		printf("%d\n", s-1);
	}
} 
