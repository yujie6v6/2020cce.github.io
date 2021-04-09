# week05字串

## 字串宣告
![week05-1](https://user-images.githubusercontent.com/79676845/112567010-02f7fd80-8e1b-11eb-8100-7f8094fdf1cd.png)

```c
#include <stdio.h>
int main()
{
        char line[10]="decline";
        char line2[10]={'p','r','o','p','e','r','\0'};

        printf("%s\n",line);
        printf("%s\n",line2);

}
```

## 字串結尾'\0'
![week05-2codeblocks](https://user-images.githubusercontent.com/79676845/112567015-07241b00-8e1b-11eb-9669-37cc7684f9c3.png)

```c
#include <stdio.h>
int main()
{
        char line[10]="decline";
        char line2[10]={'p','r','o','p','e','r','\0'};

        printf("%s\n",line);
        printf("%s\n",line2);

        char line3[]="majority";
        printf("%s\n",line3);
        char line4[]={'m','a','j','o','r','i','t','y'};
        printf("現在印出來的line4: ==%s==\n",line4);

}
```
## 字串排序
ex:line[5][10] --> 有五個字串，每個字串有五格
![week05-3](https://user-images.githubusercontent.com/79676845/112568442-7438b000-8e1d-11eb-82f5-fedee19af7a6.png)

```c
#include <stdio.h>
int main()
{
    char linr[5][10]={"decline","proper","majority","bullet","shop"};

    for(int i=0;i<5;i++){
        printf("%s\n",linr[i]);
    }
}
```

## 比較字串
![55555](https://user-images.githubusercontent.com/79676845/112573331-072a1800-8e27-11eb-92e3-e8dceb6b230d.jpg)
![擷取_2021_03_26_10_41_28_245](https://user-images.githubusercontent.com/79676845/112573474-52442b00-8e27-11eb-9532-e29071d5c126.png)

```c
#include <stdio.h>
#include <String.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
        printf("左邊大\n");
    } else {
        printf("右邊大\n");
    }
}
```

## 字串排序

將字串由小到大排序
```c
#include <stdio.h>
#include <string.h>
char line[100][10]; //有100個裡面可以放10個字母
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
	}//(1)讀進來
	char temp[10];//用來交換的 temp字串
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if( strcmp(line[i],line[j])   >0){//(2)大小錯
				strcpy(temp,line[i]); //temp=a;
				strcpy(line[i],line[j]); //a=b;
				strcpy(line[j],temp); //b=temp;
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}//(3)印出去
}
```
## 反序數字
輸入1個正整數，將該整數所有數字反序排列後組成一個的新整數，計算出兩者相加的結果。   
數字範圍：整數 1 – 10000 
![165711931_4012561918766966_8965373118028387878_o](https://user-images.githubusercontent.com/79676845/112597450-19687e00-8e48-11eb-8fa0-45b8488c52b9.jpg)

```c
#include <stdio.h>
int main()
{
	int n,b;
	scanf("%d",&n);
	b=n;
	int a=0;
	while(n>=1){
		a=n%10+a*10;
		n/=10;
	}
	printf("%d+%d=%d\n",b,a,a+b);
}
```

## 絕對值函數
題目名稱：絕對值函數。  
題目內容：設計一個函數f(n)，會回傳n的絕對值。  
數字範圍：整數1 – 10000  
程式限制：不得使用abs()函數。不得變更已給定的主程式。  

```c
#include <stdio.h>
int f(int n)
{
	if (n<=0) n=0-n;
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}

```

```c
#include <stdio.h>
int f(int n)
{
	return (n>0)? n:-n; //如果符合輸出n,不是的話輸出-n
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```

## N數之和
輸入一個整數N，之後讀入N個整數，請輸出其和。 
數字範圍：N=整數1 – 10，其餘整數1 – 100。 
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	int a[10];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		ans+=a[i];	
	}
	printf("%d\n",ans);
}
```
 ## 三數極大
輸入三個正整數，輸出其最大值。 
數字範圍：整數1 – 100 
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c) printf("%d",a);
	if(b>a&&b>c) printf("%d",b);
	if(c>b&&c>a) printf("%d",c);
	printf("\n");
}
```
