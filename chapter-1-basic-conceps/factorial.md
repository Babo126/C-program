---
description: 階乘
---

# Factorial

> #### **def:**&#x20;
>
> ```
>     n! = 1, if n = 0
>     n! = n*(n-1)*(n-2), if n > 0
> ```

```clike
// using iteration:
     int f=1, x;
     for(x=n;x>0;x--){ //設置一個替身變數 x 給 n，x 從 n 開始到 1 乘給預設 f，f 的最終結果就是 n!
        f *= x;
     }
     return f                         
```

```clike
// using recursion:
      int fact(int n){
        if(n == 0){
            return 1;
      }
      else{
        return n*fact(n-1); //重複呼叫自己，形成遞迴函數
      }  
```
