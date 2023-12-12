#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int d, p; //days, politics
		cin >> d >> p;
		int day[d+1] = {0}, hi = 0, h[p] = {0};
		int i;
		for(i = 0; i < p; i++){
			cin >> h[i];
			int fr = 6, sa = 7; //五六休息 
			
			//從第一天開始判斷是否罷工 
			int j;
			for(j = 1; j < d+1; j++){
				if(j % h[i] == 0 && ((j != fr) && (j != sa))){
					day[j]++;
				}
				else if(j == fr){ //計算下周五是第幾天 
					fr += 7;
				}
				else if(j == sa){
					sa += 7;
				}
			}
		
		}
		
		//檢查所有天數是否罷工 
		for(i = 1;i < d+1; i++){
			if(day[i] > 0){
				hi++;
			}
		}
		
		cout << hi << endl;
	}
	return 0;
}
