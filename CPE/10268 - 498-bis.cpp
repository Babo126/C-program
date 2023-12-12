#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main(){
	//輸入x值 
	int x;
	while(scanf("%d", &x) != EOF){
		//創立並讀取係數字串 
		string coe;
		getline(cin, coe);
		getline(cin, coe);
		//LL是long long int 
		LL len = 0, num;
		//stringstream是特殊函數，可以將字串當作流(stream)來讀寫 
		stringstream ss(coe);
		//計算到底有多少個數(次方) 
		while(ss >> num){
			len++;
		}
		//最後多1要減掉 
		len--;
		
		stringstream ss1(coe);
		LL ans = 0, i;
		//使用霍納法則計算多項式:每一步先乘x，然後加上下一個係數 
		for(i = 0; i < len; i++){
			ss1 >> num;
			ans *= (LL)x;
			ans += (len - i) * num;
		}
		//輸出 
		printf("%lld\n", ans);
	}
	return 0;
} 
