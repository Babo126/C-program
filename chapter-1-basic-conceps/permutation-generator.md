---
description: 排列
---

# Permutation Generator

<div align="center" data-full-width="false">

<figure><img src="../.gitbook/assets/未命名 (1).png" alt="" width="341"><figcaption><p>排列可以視為n個元素*(n-1)!的遞迴式，<br>並且從第二行開始可以視為a和其他元素的交換</p></figcaption></figure>

</div>

<figure><img src="../.gitbook/assets/未命名 (1) (1).png" alt="" width="563"><figcaption><p>排列可以視為每次把第一個元素放著(a[k])，剩下的繼續執行遞迴，直到框框內剩下一個元素，無法繼續遞迴後，列印出所有元素；<br>當第一個元素的所有排列都完成後，和k+1個元素交換，繼續執行遞迴</p></figcaption></figure>



```c
//Recursion of Permutation

void Permutation(char *a, const int k, const int m){
    if(k == m){
        for(int i=0;i<=m;i++){
            printf("%d", a[i]);
        }
    }
    else{
        for(int i=k;i<=m;i++){
            swap(a[k], a[i]); //調換第一個元素(放外面那個)
            Permutation(arr, k+1, m);//剩下(框框內)的元素繼續遞迴 
            swap(a[k], a[i]);//恢復原狀
        }
    }    
}
```
