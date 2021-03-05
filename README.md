# 第一週

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
# 第二週

## 1.指標

執行結果：
n1:10 n2:20 n3:30
n1:200 n2:20 n3:30
n1:200 n2:20 n3:300

```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```

## 2.讀入整數反序列印 
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後將所輸入的正整數以相反序顯示在畫面上。

```c
#include <stdio.h>
int a[1000];
int main()
{
	int n=0;
	for(int i=0;i<=1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){ 
		n=i;
		break;
		}
	}
	
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```

## 3.A的B次方函數
請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。

```c
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
		ans*=a;
		return ans;		
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}

```

## 4.漸增數列相加
輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		ans+=(i-1)*i;
	}
	printf("%d\n",ans);
}
```
