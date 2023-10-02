---
description: C++不允許自訂類別使用內建的運算子，因此要使用運算子多載(overload)的特性定義專屬於類別的運算子
---

# Operator Overloading

### 規則

* 可自行定義使用者物件的運算子運作方式&#x20;
* 只能對現有的運算子做多載&#x20;
* 不能自己定義新的運算子

### 限制

* 不能改變內建資料型態運算子的運作方式&#x20;
* 不能改變運算子的計算優先順序(可使用括號限制運算子的計算順序)&#x20;
* 不能改變運算方向
* 不能改變運算元個數
* 不能多載的符號：

| operator | 說明           | 實際用法                                             |
| -------- | ------------ | ------------------------------------------------ |
| ::       | 範圍運算子        | Score<mark style="color:red;">**::**</mark>Score |
| ?:       | 條件運算子        |                                                  |
| .        | 直接成員存取運算子    | s1<mark style="color:red;">**.**</mark>Score()   |
| .\*      | 指向類別成員運算子的指標 |                                                  |
| sizeof() | 大小運算子        |                                                  |

### "+"運算子多載

```cpp
// 以運算子"+"作為範例
#include <iostream>
using namespace std;

class Score{
    public:
        int var1;
        Score(int a){
            var1 = a;
        }
};

//宣告加法運算子多載
int operator+(int x, Score s1){
    return (x+s1.var1);
}

int main()
{
    Score st1(20);
    cout<<"100 + 20 = "<<(100+st1)<<endl; //由於100為非Score class成員物件，因此加法運算子多載要宣告成非成員函數，否則不能這樣加

    return 0;
}
```

### ">>"與"<<"的多載

{% code overflow="wrap" %}
```cpp
#include <iostream>
using namespace std;

class Score{
    public:
        int var1;
};

//宣告>>運算子多載
int operator>>(istream& inputvar, Score& s1){ //istream&其實就等於cin, 而Score& s1則是讀取到輸入的變數
    cout << "enter a val: ";
    inputvar >> s1.var1;
    return inputvar;
}

//宣告<<運算子多載
int operator<<(ostream& outputvar, Score& s1){ //同理ostream&是cout, Score& s1是待輸出的變數
    cout << "You entered: ";
    outputvar << s1.var1;
    return outputvar;
}

int main()
{
    Score st1;
    cin >> st1; //使用多載>>運算子來輸入變數值
    cout << st1; //使用多載<<運算子來輸出變數值
    return 0;
}
```
{% endcode %}

### 補充：其他特殊運算子多載

* 「=」運算子多載
* 「+=」運算子多載
* 「\[ ]」運算子多載
* 關係運算子多載
* 「++」、「--」運算子多載

### 補充資料

{% embed url="https://hackmd.io/@Maxlight/Bynb8bUh_" %}
淺顯易懂的說明
{% endembed %}

{% embed url="https://hackmd.io/@ndhu-programming-2021/BJL0FF_J9#%E7%82%BA%E4%BD%95%E8%A6%81-operator-overloading" %}
有講到istream以及ostream，比較詳細
{% endembed %}

