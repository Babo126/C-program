#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#define PI 3.1415926
using namespace std;

int main(){
	double s, a;
	string str;
	
	while(cin >> s >> a >> str){
		//角度轉換 
		//角分換成角度
		if(str == "min"){
			a /= 60;
		} 
		//超過360 > 轉成同位角 
		while(a >= 360){
			a -= 360;
		}
		//超過180 > 餘角 
		if(a > 180){
			a = 360 - a;
		} 
		
		//output
		//弧長公式：2*PI*radius*(angle/360); 
		cout << fixed << setprecision(6); //精確到小數點後六位 
		cout << (s + 6440) * a * PI / 180 << " "; //輸出弧度(角度轉弧度) 
		//弦長公式：2*radius*sin(弧長/2)  
		cout << (s + 6440) * sin(a/2 * PI / 180) * 2 << "\n"; //輸出直線距離 
	}
	return 0;
}
