#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double x[4], y[4], sumX, sumY;
	//第一個座標有數值 >> 仍有輸入 
	while(cin >> x[0] >> y[0]){
		sumX = x[0];
		sumY = y[0];
		//將所有座標相加 
		int i;
		for(i = 1;i < 4; i++){
			cin >> x[i] >> y[i];
			sumX += x[i];
			sumY += y[i];
		}
		int j;
		for(i = 0;i < 4; i++){
			for(j = i+1;j < 4; j++){
				//找相同的座標
				if(x[i] == x[j] && y[i] == y[j]){
					cout << fixed << setprecision(3); //精確到小數點後三位
					//套用平行四邊形的性質:兩對角線互相評分
					//A+B = C+D 
					//sum = A+A+C+D
					//B = C+D-A >> sum-3A 
					cout << sumX - 3*x[i] << " ";
					cout << sumY - 3*y[i] << " ";
					cout << endl;
				} 
			}
		}
	}
}

