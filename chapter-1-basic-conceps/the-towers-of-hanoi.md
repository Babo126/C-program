---
description: 經典的河內塔問題，關鍵在於不要去思考到底有幾個盤子，而是要從柱子的角度出發
---

# The towers of Hanoi



<figure><img src="../.gitbook/assets/Tower-of-Hanoi-Tower-of-Brahma-or-Lucas-Tower.jpg" alt=""><figcaption><p>Hanoi Tower</p></figcaption></figure>

> **def:**
>
> &#x20;         $$A\longrightarrow B , move \space (n-1)\space disks$$
>
> &#x20;       $$A\longrightarrow C , move \space the\space disk\space n$$
>
> &#x20;       $$B\longrightarrow C , move \space (n-1)\space disks$$

```c
// Recursive for the Tower
#include<stdio.h>

void towers(int, char, char, char);
void main(){
	int n; //盤子數
	scanf("%d", &n);
	towers(n, 'A', 'B', 'C');  
}

void towers(int n, char A, char B, char C){
	if(n == 1){
		printf("\n%s%c%s%c", "move disk 1 from peg", A, "to peg", C);
		return;
	}
	
	towers(n-1, A, C, B); //把n-1個盤子從A搬到B
	printf("\n%s%d%s%c%s%c", "move disk", n, "from peg", A, "to peg", C); //把第n個盤子從A搬到C 
	towers(n-1, B, A, C); //把n-1個盤子從B搬到C 
}
```

{% hint style="warning" %}
不要去思考n-1是什麼，把那一整堆都當成**一個盤子**
{% endhint %}
