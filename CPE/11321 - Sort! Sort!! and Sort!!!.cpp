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
		
		//Ū��n�ӼƦr 
		int i, num[n] = {0};
		for(i = 0;i < n; i++){
			cin >> num[i];
		}
		
		//�Ƨǥ洫
		int j;
		for(i = 0;i < n; i++){
			for(j = 0;j < n-i-1; j++){
				//�Y���l��>�U�@�Ӿl�� >> �洫 
				if(num[j]%m > num[j+1]%m){
					swap(&num[j], &num[j+1]);
				}
				//�Y�l�ƬۦP�h�����Ӫ��Ʀr 
				else if(num[j]%m == num[j+1]%m){
					//�@�_�Ƥ@����
					if(num[j]%2 == 0 && num[j+1]%2 != 0){
						swap(&num[j], &num[j+1]);
					}
					//�Ҭ��_��
					else if(num[j]%2 != 0 && num[j+1] != 0){
						//�e�̸��p�~��洫(�_�Ƥj���ƫe��) 
						if(num[j] < num[j+1]){
							swap(&num[j], &num[j+1]);
						}
					}
					//�Ҭ�����
					else if(num[j]%2 == 0 && num[j+1] == 0){
						//�e�̸��j�~��洫(���Ƥp���ƫe��) 
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
