## 簡化版UVA10062告訴我頻率-不用排序
有很多行文字的 Input, 每一行代表一組測試資料, 每行最多不超過 1000 個英文字母。請統計每一行裡的字母出現頻率。為了簡化問題, 字母只會出現 ASCII 值 32 之後的部分 (32之前是特殊符號)。請別擔心, ASCII 值 128 之後的特殊符號也不會出現。 為了讓大家比較好寫程式, 只要照著 ASCII 的順序逐字母印出即可。 (不用像UVA10082 那樣很複雜的排序) 還有, 每筆測試資料之間的 Input 要記得用空白行隔開。
 ```c
 #include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={}	;	

	
	for(int i=0;line[i]!=0;i++){
		char c=line[i];
		ans[c]++;
		}

	
	if(t>0) printf("\n");
	for(int i=0;i<256;i++){
		if(ans[i]>0) printf("%d %d\n",i,ans[i]);
		}
	}
}
 ```
##  UVA10062 Tell me the frequencies!
![10062](https://user-images.githubusercontent.com/79676845/118211593-ee40f900-b49e-11eb-80a6-426daf357085.jpg)
題目說明:輸入一串字元，紀錄字元數目，並將其ASCll碼顯示出來。

```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={}	;	
		char c[256]={};
		for(int i=0;i<256;i++) c[i]=i;
	
	for(int i=0;line[i]!=0;i++){
		char c=line[i];
		ans[c]++;
		}
		
	for(int i=0;i<256;i++){
		for(int j=i+1;j<256;j++){
			if(ans[i]>ans[j]){
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char t=c[i];
				c[i]=c[j];
				c[j]=t;
			
			}
			
			if(ans[i]==ans[j] && c[i]<c[j]){
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char t=c[i];
				c[i]=c[j];
				c[j]=t;
			
			}
		}
	}

	
	if(t>0) printf("\n");
	for(int i=0;i<256;i++){
		if(ans[i]>0) printf("%d %d\n",c[i],ans[i]);
		}
	}
}

```

## UVA299:Train Swapping
![train](https://user-images.githubusercontent.com/79676845/118219983-2818fc00-b4ad-11eb-8728-042064b2867a.jpg)
![week12-5配合泡泡排序法, 完成 UVA299](https://user-images.githubusercontent.com/79676845/118220036-43840700-b4ad-11eb-940b-d465746deb2b.png)
#include <Stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		int ans=0;
		
		for(int k=0;k<n-1;k++){
			for(int i=0;i<n-1;i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}

## UVA11321 Sort! Sort!! and Sort!!! 
![sort](https://user-images.githubusercontent.com/79676845/118220117-729a7880-b4ad-11eb-856a-efa192991802.jpg)
![week12-7全部完成,回家再寫](https://user-images.githubusercontent.com/79676845/118220123-78905980-b4ad-11eb-901a-f9cc7aa2c2e7.png)

## 基礎題：剩餘啤酒有幾手又幾瓶
假設購買啤酒瓶數有p瓶，喝掉d手（一手六瓶）後，試回答共剩幾手啤酒又幾瓶？
```c
#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d%d",&p,&d);
	printf("%d %d",(p-d*6)/6,(p-d*6)%6);
}
```


## 基礎題：三數最小
寫一方法能接受三個正整數，並回傳其最小值
```c
#include <stdio.h>
int min(int a,int b,int c)
{
	int ans=a;
	if(ans>b) ans=b;
	if(ans>c) ans=c;
	
	return ans;
}

int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("%d\n",min(x,y,z));
}
```

## 基礎題：計算立方值
依序輸入六個整數，輸出六個數的立方值。
```c
#include <stdio.h>
int main()
{
	int a[6];
	for(int i=0;i<6;i++){
		scanf("%d",&a[i]);
		printf("%d\n",a[i]*a[i]*a[i]);
	}
}
```

## 基礎題：找千位數
讀入 1000 - 100000 的數字，找出其千位數的數字
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n/1000%10);
}
```


## 進階題：數字個數
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後顯示所輸入正整數的個數。
```c
#include <stdio.h>
int main()
{
	int a,ans=0;
	while(scanf("%d",&a) !=EOF )//EOF=enf of file
	{
		ans++;
	}
	printf("%d",ans-1); //因為最後一個為0
}
```

```c
#include <stdio.h>
int main()
{
	int a[20],ans=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		ans++;
	}
	printf("%d",ans);
}

```


## 進階題：判斷平方數
讀入一個1 – 1000000的數字，判斷該數字是否為某數字的平方數：如果是，則印出該數字為哪個數字的平方數；如果不是，則印出0。
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(i*i==n) ans=i;
	}
	
	printf("%d",ans);

}
```

## 進階題：計算質數個數
從鍵盤讀入2個 2 - 10000的數字，請計算出兩數字間(含兩數字，假設第2個數字較大)，有幾數字是質數。
```c
#include <stdio.h>
int main()
{
	int a,b,j,ans=0; //計算質數個數
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		for(j=2;j<i;j++){
			if(i%j==0) break;
		}
		if(j==i) ans++; //第二層for完整跑完，代表沒有數可整除i
	}
	printf("%d",ans);
}
```

## 進階題：三數組合
讀入三個 0 - 9 的數字，將其組合成最大的數字，並計算將該數字加1的結果。
```c
#include <stdio.h>
int main()
{
	int a[3],i,temp;
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<2;i++){
		if (a[i]<a[i+1]){
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
		}
	}
	printf("%d",a[0]*100+a[1]*10+a[2]+1);
}
```
