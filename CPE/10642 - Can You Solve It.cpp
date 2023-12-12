#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, i;
	scanf("%d", &n);
	for(i = 1;i <= n; i++){
		int startX, startY, endX, endY;
		scanf("%d %d %d %d", &startX, &startY, &endX, &endY);
		//使用無窮級數公式 step = (x+y) * (x+y+1) / 2 + x
		int startStep = (startX + startY) * (startX + startY + 1) / 2 + startX;
		int endStep = (endX + endY) * (endX + endY + 1) / 2 + endX;
		int step = endStep - startStep;
		//output
		printf("Case %d: %d\n", i, step); 
	}
}
