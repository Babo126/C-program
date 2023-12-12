#include<stdio.h>

int main(){
	int t, v;
	while(scanf("%d %d", &t, &v) != EOF){
		if(t < 0 || t > 200 || v < -100 || v > 100){
			continue;
		}
		
		//2倍時間之位移
		/*
			v_t = v_0 + at
			>> v_0 = v_t - at
			s_2t = v_02t + 1/2a(2t)^2
				 = (v_t - at)2t + 1/2a4t^2
				 = 2v_t*t - 2at^2+ 2at^2
				 = 2 * v_t * t 
			>> s_2t = 2 * v_t * t
		*/
		int s = 2 * v * t;
		printf("%d\n", s); 
	}
}
