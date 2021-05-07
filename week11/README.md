## qsort 排序
![week11-1](https://user-images.githubusercontent.com/79676845/117389205-96dede00-af1e-11eb-83c1-4d006ee6ed94.png)

```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare (const void *p1,const void *p2)
{
    int d1 = * (int*) p1;
    int d2 = * (int*) p2;
    if(d1>d2)  return 1;
    if(d1==d2) return 0;
    if(d1<d2)  return -1;
}

int main()
{
    qsort (a,10,sizeof(int),compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);

    }

}
```

## struct 結構1
![week11-3](https://user-images.githubusercontent.com/79676845/117391028-c2af9300-af21-11eb-9f84-f1ddc080fb10.png)
```c
#include <stdio.h>
struct data{
    int ans;
    char c;
};

struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
```

## struct 結構2
![45616898456](https://user-images.githubusercontent.com/79676845/117391574-c4c62180-af22-11eb-9827-ac57743ad045.jpg)

```c
#include <stdio.h>
typedef struct data{
    int ans;
    char c;
}DATA;

DATA box;

int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
```

## 進階題：兩數間可被7整除的數
輸入兩個整數，找出兩數之間所有可能被7整除的整數。
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		for(int i=b;i<=a;i++){
			if(i%7==0) printf("%d ",i);
		}
	}
	
	if(a<b){
		for(int i=a;i<=b;i++){
			if(i%7==0) printf("%d ",i);
		}
	}
	
}

```

## 進階題：奇數之和
輸入一個整數N，輸出由1至N中間的奇數和。
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1) ans+=i;
	}
	printf("%d",ans);
}
```

## 進階題：利用自訂函式最大值max與最小值min求出兩者之差
輸入四個正整數後，利用函式判斷最大值與最小值，並輸出最大值減最小值之差
```c
int max(int a,int b,int c,int d)
{
	int x=a;
	if(x<b) x=b;
	if(x<c) x=c;
	if(x<d) x=d;
	return x;
}

int min(int a,int b,int c,int d)
{
	int x=a;
	if(x>b) x=b;
	if(x>c) x=c;
	if(x>d) x=d;
	return x;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}

```


## 進階題：字串中的數字個數
讀入一個至多80個字的字串，找出字串中有多少個數字。
```c
#include <stdio.h>
int main()
{
	char a[80];
	scanf("%s",&a);
	int i=0,ans=0;
	while(a[i]!='\0')
	{
		if(a[i]>='0' && a[i]<='9') ans++;
		i++;
	}
	printf("%d",ans);
}

```
