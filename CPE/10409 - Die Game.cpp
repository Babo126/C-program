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
		//順序：上下北西南東 
		int faces[6] = {1, 6, 2, 3, 5, 4};
		
		while(n--){
			string str = "";
			cin >> str;
			
			//判斷指令 
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

//向北轉：上北下南 
void toNorth(int *a){
	int tmp = a[0];
	a[0] = a[4]; //骰子向北轉下一個是南面  
	a[4] = a[1];
	a[1] = a[2];
	a[2] = tmp; 
}

//向南轉：上南下北 
void toSouth(int *a){
	int tmp = a[0];
	a[0] = a[2];
	a[2] = a[1];
	a[1] = a[4];
	a[4] = tmp; 
}
	
//向西轉：上西下東 
void toWest(int *a){
	int tmp = a[0];
	a[0] = a[5]; //骰子向西轉下一個是東面 
	a[5] = a[1];
	a[1] = a[3];
	a[3] = tmp; 
}

//向北轉：上北下南 
void toEast(int *a){
	int tmp = a[0];
	a[0] = a[3];
	a[3] = a[1];
	a[1] = a[5];
	a[5] = tmp; 
}
