#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double x[4], y[4], sumX, sumY;
	//�Ĥ@�Ӯy�Ц��ƭ� >> ������J 
	while(cin >> x[0] >> y[0]){
		sumX = x[0];
		sumY = y[0];
		//�N�Ҧ��y�Ьۥ[ 
		int i;
		for(i = 1;i < 4; i++){
			cin >> x[i] >> y[i];
			sumX += x[i];
			sumY += y[i];
		}
		int j;
		for(i = 0;i < 4; i++){
			for(j = i+1;j < 4; j++){
				//��ۦP���y��
				if(x[i] == x[j] && y[i] == y[j]){
					cout << fixed << setprecision(3); //��T��p���I��T��
					//�M�Υ���|��Ϊ��ʽ�:��﨤�u���۵���
					//A+B = C+D 
					//sum = A+A+C+D
					//B = C+D-A >> sum-3A 
					cout << sumX - 3*x[i] << " ";
					cout << sumY - 3*y[i] << " ";
					cout << endl;
				} 
			}
		}
	}
}

