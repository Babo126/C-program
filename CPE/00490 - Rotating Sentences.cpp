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
	
	//rotate:�̷ӨC�@�Ӿ�C���X��X 
	int j, k;
	for(j = 0;j < max; j++){
		for(k = i-1;k >= 0;k--){
			//�p�G��col����>�ثerow�N��X�A�_�h�N�L�X�Ů� 
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
