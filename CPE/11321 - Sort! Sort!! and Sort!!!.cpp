#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int n, m;
	while(cin >> n >> m){
		if(n == 0 && m == 0){
			cout << "0 0" << endl;
			break;
		}
		else{
			cout << n << " " << m << endl;
		}
		
		//弄n计 
		int i, num[n] = {0};
		for(i = 0;i < n; i++){
			cin >> num[i];
		}
		
		//逼ユ传
		int j;
		for(i = 0;i < n; i++){
			for(j = 0;j < n-i-1; j++){
				//璝緇计>緇计 >> ユ传 
				if(num[j]%m > num[j+1]%m){
					swap(&num[j], &num[j+1]);
				}
				//璝緇计玥ゑ耕ㄓ计 
				else if(num[j]%m == num[j+1]%m){
					//计案计
					if(num[j]%2 == 0 && num[j+1]%2 != 0){
						swap(&num[j], &num[j+1]);
					}
					//计
					else if(num[j]%2 != 0 && num[j+1] != 0){
						//玡耕ユ传(计逼玡) 
						if(num[j] < num[j+1]){
							swap(&num[j], &num[j+1]);
						}
					}
					//案计
					else if(num[j]%2 == 0 && num[j+1] == 0){
						//玡耕ユ传(案计逼玡) 
						if(num[j] > num[j+1]){
							swap(&num[j], &num[j+1]);
						}
					} 
				}
			}
		} 
		//output
		for(i = 0;i < n; i++){
			cout << num[i] << endl;
		}
	}
}
