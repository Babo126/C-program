//Purppose:�p���إX�{���ʤ��� 

#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip> //io�榡���� 
#include<map>
using namespace std;

int main(){
	int t; //testcase
	scanf("%d", &t);
	getchar(); //for the last case enter
	getchar(); // for "\n"
	
	while(t--){
		map<string, double> record; //�ϥ�map�ӰO���C�Ӿ�إX�{���� 
		string tree; //������ئW�� 
		int n = 0;
		while(getline(cin, tree)){
			//�ˬd�O�_Ū���Ŧ� 
			if(tree.compare("") == 0){
				break;
			}
			//map�����������+1 
			record[tree]++;
			//�`��++ 
			n++;
		}
		//���Xmap 
		for(map<string, double>::iterator i =record.begin();i != record.end();i++){
			//��X��ةM�X�{�ʤ���(4��p��) 
			cout << i->first << " " << fixed << setprecision(4) << i->second * 100.0 / n << endl;
		}
		
		//�ˬd�O�_���Ѿl���� 
		if(t){
			//�p�G���A��X�@�ӪŦ� 
			puts("");
		}
	}
	return 0;
} 
