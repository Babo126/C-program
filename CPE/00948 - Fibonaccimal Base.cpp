#include<iostream>
using namespace std;

int main(){
	//generate fib
	int fib[39], i;
	fib[0] = 1;
	fib[1] = 2;
	for(i = 2;i < 39; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	//testcase
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		cout << n << " = ";
		
		int flag = 0;
		//從大的往下減 
		//chech the fib sequence, if n-fib[i] > 0 >> output "1"
		for(i = 38;i >= 0; i--){
			if(n-fib[i] >= 0){
				cout << "1";
				n -= fib[i];
				flag = 1; //after the 1st "1" can output "0"
			}
			else if(flag == 1){
				cout << "0";
			}
		}
		cout << " (fib)" << endl;
	}
	return 0;
}
