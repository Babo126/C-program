#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main(){
	//��Jx�� 
	int x;
	while(scanf("%d", &x) != EOF){
		//�Хߨ�Ū���Y�Ʀr�� 
		string coe;
		getline(cin, coe);
		getline(cin, coe);
		//LL�Olong long int 
		LL len = 0, num;
		//stringstream�O�S���ơA�i�H�N�r���@�y(stream)��Ū�g 
		stringstream ss(coe);
		//�p��쩳���h�֭Ӽ�(����) 
		while(ss >> num){
			len++;
		}
		//�̫�h1�n� 
		len--;
		
		stringstream ss1(coe);
		LL ans = 0, i;
		//�ϥ��N�Ǫk�h�p��h����:�C�@�B����x�A�M��[�W�U�@�ӫY�� 
		for(i = 0; i < len; i++){
			ss1 >> num;
			ans *= (LL)x;
			ans += (len - i) * num;
		}
		//��X 
		printf("%lld\n", ans);
	}
	return 0;
} 
