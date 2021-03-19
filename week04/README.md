# struct 結構
## week04-1
![week04-1](https://user-images.githubusercontent.com/79676845/111728973-f74f8880-88a8-11eb-9e50-9dade7ff15e8.png)
```c
#include <stdio.h>

 struct POINT {
    float x,y;
 };

 int main()
 {
     struct POINT a;
 }
```

## week04-2
![week04-2](https://user-images.githubusercontent.com/79676845/111729027-0f270c80-88a9-11eb-8b0d-c2fc25aace05.png)
```c
#include <stdio.h>

 struct POINT {
    float x,y;
 };

 int main()
 {
     struct POINT a={4.1,3.2};
     printf("%f %f\n",a.x,a.y);
 }
```

## week04-3
![week04-3](https://user-images.githubusercontent.com/79676845/111729035-16e6b100-88a9-11eb-94a0-662e8f8d3682.png)
```c
#include <stdio.h>

 struct POINT {
    float x,y;
 };

 int main()
 {
     struct POINT a={4.1,3.2};
     printf("%f %f\n",a.x,a.y);

     a.x=1;
     a.y=2;
     printf("%f %f\n",a.x,a.y);
 }
 ```

## week04-4
![week04-4](https://user-images.githubusercontent.com/79676845/111729055-2239dc80-88a9-11eb-8e09-641147d54970.png)
![week04-4printf](https://user-images.githubusercontent.com/79676845/111729068-28c85400-88a9-11eb-8668-ed00bc47e9f7.png)
```c
#include <stdio.h>
struct DATA{
    int x,y;
}a[3];

struct DATA b={100,200};

int main()
{
    for(int i=0;i<3;i++){
        printf("a[%d]:%d %d\n",i,a[i].x,a[i].y);
    }
    printf("b:%d %d\n",b.x,b.y);

    struct DATA c;
    printf("c:%d %d 像亂碼\n",c.x,c.y);
    c=b;

    printf("c:%d %d\n",c.x,c.y);
}
```

## week04-5
```c
#include <stdio.h>
struct DATA{
    int x,y;
}a[3];

struct DATA b={100,200};

int main()
{
    for(int i=0;i<3;i++){
        printf("a[%d]:%d %d\n",i,a[i].x,a[i].y);
    }
    printf("b:%d %d\n",b.x,b.y);

    struct DATA c;
    printf("c:%d %d 像亂碼\n",c.x,c.y);
    c=b;

    printf("c:%d %d\n",c.x,c.y);
}
```

## 除惡務盡
輸入一個字串，將所有字元2去除後輸出。
```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);//將字串讀入依序放入陣列，最後加'\0'
	int i=0; //while迴圈記得給初始值
	while (a[i]!='\0')
	{
		if(a[i]!='2')
		printf("%c",a[i]); //%c是字元
		i++;
	}
	printf("\n");
}
```

## 擲骰統計 
輸入一字串為擲骰的結果，統計1到6點出現的狀況。
```c
#include <stdio.h>
int main()
{
	char count[7]={0};
	char a[100];
	scanf("%s",&a);
	int i=0;
	while (a[i]!='\0')
	{
		count[a[i]-'0']++;
		i++;
	}
	for(i=1;i<=6;i++){
		printf("%d:%d\n",i,count[i]);//點數%d次數%d
	}
	
}
```
## 函數找整數的最大數字
設計一個函數max_digit(n)，找出組成正整數n中的最大數字，例如：183的最大數字為8。
```c
#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max; //紀錄最大值
	max=n%10;//n的個位數
	while(n>0)
	{
		if ((n%10)>max) max=n%10;
		n/=10;
	}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
```
## 星星等腰三角 
輸入1個正整數n，作為輸出星星三角的層數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
			}
		for(int j=1;j<=i*2-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
```
## 分開整數的每個數字
撰寫一個程式，輸入一個五位數的數字，將這個數字分成個別的數字，然後分別印出每個數字，數字中間必須相隔3個空格。例如，若輸入42139，則程式必須印出： 4 2 1 3 9 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d   %d   %d   %d   %d",n/10000,n/1000%10,n/100%10,n/10%10,n%10);
}
```

如果題目沒有告訴幾位數
 ```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	int i=0;
	scanf("%s",&a);
	while(i<(strlen(a)-1) )//strlen(a)取得a字串的長度(有多少字元)
	{
		printf("%c   ",a[i]);
		i++;
	}
	printf("%c",a[i]);
}
 ```

## 字元判別 
輸入一個字元，若其為大寫字母則輸出U，若其為小寫字母則輸出L，若其為數字則輸出D，若為其他則輸出O
```c
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if('A'<=a && a<='Z')
	printf("U");
	
	else if('a'<=a && a<='z')
	printf("L");
	
	else if('0'<=a && a<='9')
	printf("D");
	
	else printf("O");
}
```

## 數字之首
輸入一個整數N，請找出這個數字的首位數
```c
#include <stdio.h>
int main()
{
	char a[1000];
	scanf("%s",&a);
	printf("%c",a[0]);
}
```

## 輸出從0到N的偶數
輸入一正整數Ｎ後，利用迴圈概念輸出所有0～N內的偶數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0) printf("%d ",i);
	}
}
```



