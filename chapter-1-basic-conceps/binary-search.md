---
description: >-
  二元搜尋法，其他還有像  通常講到search就會連帶一起講sort。簡單來說就是從中間切一半取 middle，看待搜尋的 x 是 >,=,<
  middle, 來進行判斷。
---

# Binary Search

```c
// using iteration:
      int BinarySearch(int *a, int x, const int n){
          int left = 0, right = n-1; //設置左右端比較
          while(left <= right){ //避免左右交錯
            int middle = (left + right)/2;  
            if(x > a[middle]){left = middle + 1}; 
            else if(x < a[middle]){right = middle -1};
            else{return middle}; //若 x 找到則回傳 middle 值，知道 x 屬於第幾個元素
          }
          return -1; //回傳 -1 表示找不到 x
      }
    
```

```c
// using  recursion:
      int BinarySearch(int *a, int x, const int left, const int right){
          int middle = (left + right)/ 2;
          if(left <= right){
            if(x < a[middle]){return BinarySearch(a, x, left, middle - 1)};
            else if(x > a[middle]){return BinarySearch(a, x, middle + 1, right)};
            else{return middle};
          }
          return -1;
      }
```

{% hint style="warning" %}
在進行 Binary Search 時 array 通常都是要**經排序過**的，若尚未排序則會出現找不到值的狀況發生。
{% endhint %}

