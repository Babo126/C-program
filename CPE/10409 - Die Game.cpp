#include<iostream>
#include<string>
using namespace std;
void toNorth(int *a);
void toSouth(int *a);
void toWest(int *a);
void toEast(int *a);
int main(){
	int n;
	while(cin >> n && n != 0){
		//���ǡG�W�U�_��n�F 
		int faces[6] = {1, 6, 2, 3, 5, 4};
		
		while(n--){
			string str = "";
			cin >> str;
			
			//�P�_���O 
			if(str == "north"){
				toNorth(faces);
			}
			else if(str == "south"){
				toSouth(faces);
			}
			else if(str == "west"){
				toWest(faces);
			}
			else if(str == "east"){
				toEast(faces);
			}
		}
		
		//output
		cout << faces[0] << endl;
	}
	return 0;
}

//�V�_��G�W�_�U�n 
void toNorth(int *a){
	int tmp = a[0];
	a[0] = a[4]; //��l�V�_��U�@�ӬO�n��  
	a[4] = a[1];
	a[1] = a[2];
	a[2] = tmp; 
}

//�V�n��G�W�n�U�_ 
void toSouth(int *a){
	int tmp = a[0];
	a[0] = a[2];
	a[2] = a[1];
	a[1] = a[4];
	a[4] = tmp; 
}
	
//�V����G�W��U�F 
void toWest(int *a){
	int tmp = a[0];
	a[0] = a[5]; //��l�V����U�@�ӬO�F�� 
	a[5] = a[1];
	a[1] = a[3];
	a[3] = tmp; 
}

//�V�_��G�W�_�U�n 
void toEast(int *a){
	int tmp = a[0];
	a[0] = a[3];
	a[3] = a[1];
	a[1] = a[5];
	a[5] = tmp; 
}
