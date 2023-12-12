/*
	�w�z: 
	�Y�@��n�i�쪺�ƥi�H�Qn - 1�㰣�A
	�h���C�Ӧ�ƪ��`�M�]�|�Qn - 1�㰣�C
	https://samchien.blogspot.com/2013/04/10093-easy-problem.html
*/
#include<iostream>
using namespace std;

int main(){
	string str;
	while(cin >> str){
		int sum = 0; //��ƩM
		int ans = -1;
		int max = -1; //�̤j���
		
		int i;
		for(i = 0;i < str.length(); i++){
			int current; //������e�r��
			//�q�r�����⦨�Ʀr 
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
			
			//�Y��e�r�� > �̤j�r�� >> ��s�r�� 
			if(current > max){
				max = current;
			}
			
			//�[�`�Ҧ���ƩM 
			sum += current;
		} 
		
		//����J����F�� 
		if(! max){
			max = 1;
		}
		
		//�qN-1�}�l���W��i�� 
		for(i = max; i < 62; i++){
			//�Y�i��i�H�㰣�Ҧ���ƩM 
			if(! (sum % i)){
				ans = i + 1; //N�����קY�O��e(N-1)+1 
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
