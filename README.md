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
int a[11];
int main()
{
	int n=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		n++;
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
## 5.均標與前標計算
輸入整數N, 再輸入N個同學的分數, 計算並且輸出均標(float 小數點後一位數), 均標是全部學生的平均分數, 再計算並且輸出前標(float 小數點後一位數), 本題的前標是大於或等於均標的同學的平均分數

```c
#include <stdio.h>
int main()
{
	int n,a[100],sum=0,sumt=0,x=0;
	float avg,avgt;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	avg=(float)sum/n;
	printf("均標:%.1f\n",avg);
	
	for(int i=0;i<n;i++){
	if(a[i]>=avg){
		sumt+=a[i];
		x++;
		}
	}
	avgt=(float)sumt/x;
	
	printf("前標:%.1f\n",avgt);

}
```
# 第三週

## 指標範例1
0 10 222 30 666
```c
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;
}
```
## 指標範例2
0 10 222 555 666
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll(){
    for (int i=0;i<5;i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
        printfAll();
    int *p=&a[2];
    *p=222;

        printfAll();
    p=p+2;
    *p=666;

        printfAll();
    p--;
    *p=555;
        printfAll();
}
```
## 指標範例3
0 10 20 30 40
0 10 222 30 40
p心裡的小紙條記的值是：4202504(亂碼)
0 10 222 30 666
p心裡的小紙條記的值是：4202512(亂碼)
0 10 222 555 666
p心裡的小紙條記的值是：4202508(亂碼)
```c
int a[5]={0,10,20,30,40};
void printfAll(){
    for (int i=0;i<5;i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
        printfAll();
    int *p=&a[2];
    *p=222;

        printfAll();
        printf("p心裡的小紙條記的值是：%d\n",p);
    p=p+2;
    *p=666;

        printfAll();
        printf("p心裡的小紙條記的值是：%d\n",p);
    p--;
    *p=555;
        printfAll();
        printf("p心裡的小紙條記的值是：%d\n",p);
}
```
