#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//2011/1/1 is saturday
int main(){
	//testcase
	int t;
	scanf("%d", &t);
	
	char str[15];
	int m, d;
	while(t--){
		//input month, date
		scanf("%d %d", &m, &d);
		//count total days
		int sum = 0;
		int i;
		for(i = 1;i < m;i++){
			switch(i){
				case 2:
					sum += 28;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					sum += 30;
					break;
				default:	
					sum += 31;
					break;
			}
		}
		
		sum += d;
		
		//total days % 7 to determine the day
		switch(sum % 7){
			case 0:
				printf("Friday\n");
				break;
			case 1:
				printf("Saturday\n");
				break;	
			case 2:
				printf("Sunday\n");
				break;
			case 3:	
				printf("Monday\n");
				break;
			case 4:
				printf("Tuesday\n");
				break;
			case 5:	
				printf("Wednesday\n");
				break;
			case 6:
				printf("Thursday\n");
				break;
		}
	}
	
	return 0;
}
