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
## 6.2進位轉10進位
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	ans=(n%10)*1;
	n=n/10;
	ans=(n%10)*2+ans;
	n=n/10;
	ans=(n%10)*4+ans;
	n=n/10;
	ans=(n%10)*8+ans;
	n=n/10;
	printf("%d\n",ans);
}
```
