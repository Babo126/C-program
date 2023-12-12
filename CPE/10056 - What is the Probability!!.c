#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i;
		float p;
		scanf("%d %f %d", &n, &p, &i);
		/*
			公式直接背起來: 
			win = (1-p)^(i-1) * p / 1 - (1-p)^n
		*/
		float a = pow((1-p), i-1)*p;
		float b = 1 - pow((1-p), n);
		float win = a / b;
		printf("%.4f\n", win);
	}
}
