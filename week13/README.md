## 進階題：求11 +22+33+…+nn
請計算11+22+33+…+nn的值。數字範圍：整數1-9。 
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		ans+=i*10+i;
	}
	printf("%d",ans);
}
```

## 進階題：求兩數之最大公因數
輸入a, b兩數，請用函數式設計，求兩數之最大公因數，a ,b > 0。

https://user-images.githubusercontent.com/79676845/119098442-6df33880-ba48-11eb-8406-7c4d4a0c0c6a.mp4

```c
#include<iostream>
using namespace std;
int GCD(int a, int b){
	int ans=1,min,i;
	if(a<b) min=a;
	else min=b;
	for(i=2;i<=min;i++){
		if(a%i==0 && b%i==0) ans=i;
	}
	return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}

```

## 進階題：區間測速-超速之王
龜山區萬壽路1段裝設區間測速器，長度1.2公里，量得10輛車通過的秒數(輸入10個整數)，請輸出第幾輛車最快的，並把它的時速印出來(只印整數部分，小數部分無條件捨去)。(時速的單位是每小時幾公里( km/hour)。1小時有60分鐘，1分鐘有60秒，輸入的是秒數) 數字範圍：整數1 – 1000 



```c
#include <stdio.h>
int main()
{
	int i,a,min,index=1;
	scanf("%d",&min);
	for(i=2;i<=10;i++){
		scanf("%d",&a);
		if(min>a){
		min=a;
		index=i;
		}
	}
	
	int s=60*60*1.2/min;
	printf("%d %d",index,s);
}

```

## 進階題：10數排序，從大到小排好
輸入10個數字，把它們從大到小排好。數字範圍：整數1 – 100。

https://user-images.githubusercontent.com/79676845/119098675-a5fa7b80-ba48-11eb-82fb-6785754da26c.mp4


```c
#include <stdio.h>
int main()
{
	int a[10],i,j,temp;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);	
	}
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}

```

## 基礎題：正整數平方總和
輸入正整數n，可計算：1*1+2*2+...+n*n 之總和的結果。數字範圍：整數1~1000 
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		ans+=i*i;
	}
	printf("%d",ans);
}
```

## 基礎題：兩數之間的3倍數總和
請輸入兩個由小到大的正整數(起始數字與終止數字)，可計算出【起始數字】到【中止數字】間所有3的倍數之總和。{ex. 3 9 => 3+6+9=18} 數字範圍：整數1~1000
```c
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%3==0) ans+=i;
	}
	printf("%d",ans);
}
```

## 基礎題：判斷座標的象限
判斷所輸入座標(x,y)的所在象限，(僅考慮在四個象限的情況，不考慮在軸線及原點的情況)。{ex.(1,1)屬第一象限、(-1,1)屬第二象限、(-1,-1)屬第三象限、(1,-1)屬第四象限} 數字範圍：整數 -1000~1000 
```c
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>0 && y>0) printf("1\n");
	if(x<0 && y>0) printf("2\n");
	if(x<0 && y<0) printf("3\n");
	if(x>0 && y<0) printf("4\n");

}
```

## 基礎題：輸入n (n>0)， 求n之所有因數和
輸入n (n>0)， 求 n之所有因數和。{ex. 2之因數為1、2，因數和為因數加總1+2=3} 
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)
		ans+=i;
	}
	printf("%d",ans);

}
```
