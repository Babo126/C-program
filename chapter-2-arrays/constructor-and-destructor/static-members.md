---
description: 補充章節：靜態成員
---

# Static Members

> **def:**在類別中，當一個成員被宣告為靜態時，其他成員皆可分享該成員的資料；靜態成員沒有this指標，採用"static"來宣告；和一般要在類別內透過建構子宣告初始值的成員不同，靜態成員的初始值要在類別之外宣告，並且，靜態成員不能重複進行初始值宣告。

```cpp
// 靜態成員
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
		//宣告靜態成員
		static long sumfires; //總打擊次數 
		static long sumsafes; //總安打次數 
		
		void inputplayer();
		void showplayer();
};

//在類別之外宣告靜態成員的初始值 
long Baseball::sumfires = 0;
long Baseball::sumsafes = 0;

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
	fs = countsafe();  
	cout<<"player: "<<player<<endl;
	cout<<"fires: "<<fires<<endl;
	cout<<"safes: "<<safes<<endl;
	cout<<"coutsafe: "<<fs<<endl;
	  
	sumfires = sumfires + long(fires); //累加總打擊次數 
	sumsafes = sumsafes + long(safes); //累加總安打次數 
}

//計算打擊率函數 
float Baseball::countsafe(){  
	float counts; //打擊率
	counts = (float(safes)/float(fires)); //計算打擊率 
	return counts; 
}

//宣告sumcountsafe函數以計算總打擊率
float sumcountsafe(){
	float sumcounts;
	sumcounts = (float (Baseball::sumsafes) / float (Baseball::sumfires));
	return sumcounts;
} 
 
//宣告sumshowplayer函數以打印總打擊次數、總安打率、總打擊率
void sumshowplayer(void){
	float sumfs;
	sumfs = sumcountsafe();
	cout<<"===================="<<endl;
	cout<<"sumfires: "<<Baseball::sumfires<<endl;
	cout<<"sumsafes: "<<Baseball::sumsafes<<endl;
	cout<<"sumfs: "<<sumfs<<endl;
} 

//宣告clearsum函數以將靜態類別資料成員初始值設為0 
void clearsum(){
	Baseball::sumfires = 0;
	Baseball::sumsafes = 0;
	cout<<"=============="<<endl;
	cout<<"initialize sumfires: "<<Baseball::sumfires<<endl;
	cout<<"initialize sumsafes: "<<Baseball::sumsafes<<endl;
}

int main(){
	Baseball b[3];
	int i;
	
	cout<<"enter data"<<endl;
	cout<<"====================="<<endl;
	for(i=0;i<3;i++){
		b[i].inputplayer();
	}
	
	cout<<"\nprint data"<<endl;
	cout<<"====================="<<endl;
	for(i=0;i<3;i++){
		b[i].showplayer();
	}
	
	sumshowplayer(); //在最後呈現三個人相加的總打擊次數、總安打次數以及總打擊率
	clearsum(); //清除先前累計之資料
	
	return 0;
}
```

<div align="left">

<figure><img src="../../.gitbook/assets/未命名 (2).png" alt="" width="563"><figcaption><p><strong>輸出結果</strong></p></figcaption></figure>

</div>
