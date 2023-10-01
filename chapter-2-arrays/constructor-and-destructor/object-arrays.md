---
description: 補充章節：物件陣列。除了單一宣告物件，也可以透過陣列的方式一次宣告多個物件
---

# Object Arrays

```cpp
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class Baseball{ //宣告Baseball物件 
	private:
		char player[20];
		int fires;
		int safes;
		float countsafe(void);
	public: 
		void inputplayer();
		void showplayer();
};

//輸入資料函數 
void Baseball::inputplayer(){ 
	cout<<"player: ";
	cin>>player;
	cout<<"fires: ";
	cin>>fires;
	cout<<"safes: ";
	cin>>safes;
}

//打印函數 
void Baseball::showplayer(void){
	float fs;
	fs = countsafe(); //宣告一個變數fs來儲存安打率 
	cout<<"player: "<<player<<endl;
	cout<<"fires: "<<fires<<endl;
	cout<<"safes: "<<safes<<endl;
	cout<<"coutsafe: "<<fs<<endl; //顯示安打率 
}

//計算打擊率函數 
float Baseball::countsafe(){  
	float counts; //打擊率
	counts = (float(safes)/float(fires)); //計算打擊率 
	return counts; 
}

int main(){
	Baseball b[3]; //宣告一個名為b的陣列函數，包含了三組資料
	int i;
	
	//用for迴圈來依序讀取與輸出資料
	cout<<"enter data"<<endl;
	cout<<"====================="<<endl;
	for(i=0;i<3;i++){
		b[i].inputplayer(); 
	}
	
	cout<<"print data\n"<<endl;
	cout<<"====================="<<endl;
	for(i=0;i<3;i++){
		b[i].showplayer();
	}
	return 0;
}
```

<figure><img src="../../.gitbook/assets/image (2).png" alt=""><figcaption><p><strong>輸出結果</strong></p></figcaption></figure>
