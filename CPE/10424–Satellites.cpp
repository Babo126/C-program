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
		//�����ഫ 
		//������������
		if(str == "min"){
			a /= 60;
		} 
		//�W�L360 > �ন�P�쨤 
		while(a >= 360){
			a -= 360;
		}
		//�W�L180 > �l�� 
		if(a > 180){
			a = 360 - a;
		} 
		
		//output
		//���������G2*PI*radius*(angle/360); 
		cout << fixed << setprecision(6); //��T��p���I�᤻�� 
		cout << (s + 6440) * a * PI / 180 << " "; //��X����(�����੷��) 
		//���������G2*radius*sin(����/2)  
		cout << (s + 6440) * sin(a/2 * PI / 180) * 2 << "\n"; //��X���u�Z�� 
	}
	return 0;
}
