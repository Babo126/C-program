/*
	定理: 
	若一個n進位的數可以被n - 1整除，
	則它每個位數的總和也會被n - 1整除。
	https://samchien.blogspot.com/2013/04/10093-easy-problem.html
*/
#include<iostream>
using namespace std;

int main(){
	string str;
	while(cin >> str){
		int sum = 0; //位數和
		int ans = -1;
		int max = -1; //最大位數
		
		int i;
		for(i = 0;i < str.length(); i++){
			int current; //紀錄當前字元
			//從字元換算成數字 
			if(str[i] >= 'A' && str[i] <= 'Z'){
				current = str[i] - 'A' + 10;
			}
			else if(str[i] >= 'a' && str[i] <= 'z'){
				current = str[i] - 'a' + 36;
			}  
			else if(str[i] >= '0' && str[i] <= '9'){
				current = str[i] - '0';
			} 
			else{
				continue;
			}
			
			//若當前字元 > 最大字元 >> 更新字元 
			if(current > max){
				max = current;
			}
			
			//加總所有位數和 
			sum += current;
		} 
		
		//未輸入任何東西 
		if(! max){
			max = 1;
		}
		
		//從N-1開始往上找進制 
		for(i = max; i < 62; i++){
			//某進制可以整除所有位數和 
			if(! (sum % i)){
				ans = i + 1; //N的答案即是當前(N-1)+1 
				break;
			}
		}
		
		//output
		if(ans == -1){
			cout << "such number is impossible!\n";
		}
		else{
			cout << ans << endl;
		}
	}
	
	return 0;
}
