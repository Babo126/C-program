#include<iostream>
#include<string>
using namespace std;

int main(){
	string str[101];
	int i = 0;
	int max = 0;
	
	//find max length
	while(getline(cin, str[i])){
		if(max < str[i].length()){
			max = str[i].length();
		}
		i++;
	}
	
	//rotate:依照每一個橫列走訪輸出 
	int j, k;
	for(j = 0;j < max; j++){
		for(k = i-1;k >= 0;k--){
			//如果該col長度>目前row就輸出，否則就印出空格 
			if(str[k].length() > j){
				cout << str[k][j];
			}
			else{
				cout << ' ';
			}
			cout << ' ';
		}
		cout << endl;
	}
	return 0;
}
