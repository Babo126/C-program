#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF){
		//exit
		if(a == 0 && b == 0){
			break;
		}
		//wrong input
		if(a < 0 || b > 10000){
			continue;
		}
		//count the number of square numbers
		int i, count = 0;
		for(i = a;i <= b; i++){
			int s = (int)sqrt(i);
			if(s*s == i){
				count++;
			}
		}
		//output
		printf("%d\n", count);
	}
}
