---
description: 中文叫做抽象物件資料型態
---

# Abstract Data Type and C++ Class

> **def：**簡單來說，ADT就像是一種定義，會告訴你這個資料型態裡面裝了什麼（包括＂功能＂(function)以及＂內容物＂(datatype)），以C++來說最常見的就是用Class來實作

#### C++的Class範例：

```c
// Recangle.h
class Rectangle{
	public: 
		//下面存的這些就是包含在內的"功能"
		Rectangle();
		~Rectangle();
		int GetHeight();
		int GetWidth();
	private:
		//這邊則是該類別內部的"內容物"
		int xLow, yLow, height, width; 
};
#endif

/*
class內的資料分成public、private和protected三種
public:任何時候、任何成員都能取用
private:只有class內的成員可以使用
protected:開放給同class以及其子class(具有繼承關係的類別)取用
*/

```

{% hint style="info" %}
通常Class的定義會額外放在帶有＂.h＂的標頭檔中，並用#include加在.cpp檔的最前方
{% endhint %}

```c
// Recangle.cpp
#include<Rectangle.h>

int Rectangle::GetHeight(){return height}; //當我們想引用內部的功能時，要用＂::＂來取用
int Rectangle::GetWidth(){return width};
```
