//Purppose:計算樹種出現的百分比 

#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip> //io格式控制 
#include<map>
using namespace std;

int main(){
	int t; //testcase
	scanf("%d", &t);
	getchar(); //for the last case enter
	getchar(); // for "\n"
	
	while(t--){
		map<string, double> record; //使用map來記錄每個樹種出現次數 
		string tree; //紀錄樹種名稱 
		int n = 0;
		while(getline(cin, tree)){
			//檢查是否讀取空行 
			if(tree.compare("") == 0){
				break;
			}
			//map中對應的樹種+1 
			record[tree]++;
			//總樹++ 
			n++;
		}
		//走訪map 
		for(map<string, double>::iterator i =record.begin();i != record.end();i++){
			//輸出樹種和出現百分比(4位小數) 
			cout << i->first << " " << fixed << setprecision(4) << i->second * 100.0 / n << endl;
		}
		
		//檢查是否有剩餘測資 
		if(t){
			//如果有，輸出一個空行 
			puts("");
		}
	}
	return 0;
} 
