# 第一週實習課

## 1.找零錢

假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。
```c
#include <stdio.h>
int main()

{
	int a;
	scanf("%d",&a);
	printf("%d=50*%d+5*%d+1*%d\n",a,a/50,a%50/5,a%5);
}

```

## 2.因數個數
輸入一個正整數，顯示所有該正整數因數的個數。
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int n=0;
	for(int i=1;i<=a;i++){
		if(a%i==0)
		n++;	
	}
	printf("%d\n",n);
}
```

## 3.找倍數
連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。
```c
#include <stdio.h>
int main()
{
	int a[10],ans=0;
	for(int i=0;i<10;i++){
	scanf("%d",&a[10]);
	if(a[10]%3==0)
	ans++;
	}
	
	printf("%d\n",ans);
}
```

## 4.整數轉換為等級
輸入一個整數，如果所輸入的整數大於或等於90，則輸出A；
如果輸入的整數小於90但大於或等於80則輸出B，
如果小於80但大於或等於60，則輸出C；如為其他整數，則輸出F。

```c
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++){
		if(a%i==0 && b%i==0)
		ans=i;
	}
	
	printf("%d %d\n",a/ans,b/ans);
}
```

## 5.分式化簡
輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。
```c
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++){
		if(a%i==0 && b%i==0)
		ans=i;
	}
	
	printf("%d %d\n",a/ans,b/ans);
}
```
