---
description: 補充章節：指標物件。變數、陣列、結構等等都有指標，類別當然也可以宣告指標。
---

# Pointer Object

在指標物件中最常用的是new及delete功能，以下透過範例講解

```cpp
// 指標物件的宣告予釋放範例
// 建立一個baseball的class物件
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class baseball{ //baseball類別宣告
	private:
		char player[20]; 
		int fires; 
		int safes; 
	public: 
		void showplayer(); 
		void setplayer(char *name, int fs, int ss); //設定資料成員的函數成員 
};

void baseball::setplayer(char *name, int fs, int ss){ //參數型 
	strcpy(player, name); 
	fires = fs; 
	safes = ss; 
}
void baseball::showplayer(void){ 
	cout<<"============="<<endl;
	cout<<"player: "<<player<<endl;
	cout<<"fires: "<<fires<<endl;
	cout<<"safes: "<<safes<<endl;
}

int main(){
	baseball b; 
	baseball *b1 = new baseball; //以指標的形式宣告b1物件，以new來宣告 
	b.setplayer("Alex", 217, 62); 
	b1->setplayer("Bomper", 225, 48); //指標形式呼叫功能要使用"->"而非"."
	b.showplayer();
	b1->showplayer();
	delete b1; //釋放記憶體 //new, delete可以當成內建功能，不用額外再寫函式
	return 0;
}
```

#### this 指標

> **def:** 建立class時，物件會自動建立屬於它自己的指標，指向記憶體中儲存該物件的位址，我們會用「this」來表示；透過this指標，可以存取類別中的資料成員(內容物)或是函數成員(功能)

```cpp
// this指標的宣告與釋放
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class baseball{ 
	private:
		char player[20]; 
		int fires; 
		int safes; 
	public: 
		void showplayer(); 
		void setplayer(char *name, int fs, int ss); //設定資料成員 
};

void baseball::setplayer(char *name, int fs, int ss){  
	strcpy(player, name); 
	fires = fs; 
	safes = ss; 
}
void baseball::showplayer(void){ 
	cout<<"============="<<endl;
	cout<<"player: "<<this->player<<endl; //以this指標存取內部的資料成員
	cout<<"fires: "<<this->fires<<endl;
	cout<<"safes: "<<this->safes<<endl;
}

int main(){
	baseball b; 
	baseball *b1 = new baseball; //以指標方式宣告物件
	b.setplayer("Alex", 217, 62); 
	b1->setplayer("Bomper", 225, 48); 
	b.showplayer();
	b1->showplayer();
	delete b1; 
	return 0;
}

```

{% hint style="warning" %}
this指標通常用在**函數成員具有多個同類別型態的參數**或者需要**回傳目前物件地址**時，我們可以透過下面範例了解如何在函數成員中使用this來取得目前物件的地址
{% endhint %}

<pre class="language-cpp"><code class="lang-cpp">// this指標存取物件地址
// 建立一個baseball的class物件
#include&#x3C;iostream>
#include&#x3C;cstdlib>
#include&#x3C;cstring>
using namespace std;

class Student{ 
	private:
		int StuID;
		float Score_E, Score_M, Score_T; 
	public: 
		Student(int id, float E, float M){
			StuID = id;
			Score_E = E;
			Score_M = M;
			Score_T = Score_E + Score_M;
			cout&#x3C;&#x3C;"============="&#x3C;&#x3C;endl;
			cout&#x3C;&#x3C;"Student ID: "&#x3C;&#x3C;this->StuID&#x3C;&#x3C;endl; //以this指標存取內部的資料成員
			cout&#x3C;&#x3C;"Total: "&#x3C;&#x3C;<a data-footnote-ref href="#user-content-fn-1">(*this).Score_T</a>&#x3C;&#x3C;endl;
			cout&#x3C;&#x3C;"this指標指向的地址: "&#x3C;&#x3C;this&#x3C;&#x3C;endl; //顯示this指標所指向之物件的地址
		}
};

int main(){
	Student stud(920101, 80, 90);
	cout&#x3C;&#x3C;"Stud物件地址:"&#x3C;&#x3C;&#x26;stud&#x3C;&#x3C;endl; //顯示物件本身的地址
	return 0;
}

</code></pre>



[^1]: 因為要存取「指標所指到變數的內容」，所以在this前面要加上"\*"，而要存取的是Score\_T的內容(分數)，因此後面要加"."
