## 用qsort函式字串排序
把字串由小自大排起來
![week07-2](https://user-images.githubusercontent.com/79676845/114121739-7d4b7600-9921-11eb-9b96-c5cc5256406f.jpg)

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char temp[10]; //字母不是字串!!

int compare(const void *p1,const void *p2)
{
	char*s1=(char*)p1; //把指標p1轉成字串s1
	char*s2=(char*)p2; //把指標p2轉成字串s2
	return strcmp(s1,s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
	}
	
	qsort(line,n,10,compare);
	
	for(int i=0;i<n;i++){
		printf("%s\n",line[i]);
	}
}
```

## 迴文判斷
從鍵盤讀入1個4位數的整數(1000-9999)。如果該數字構成廻文(即由左而右，由右而左，順序相同)，則顯示YES。如果該數字未構成廻文，則顯示NO。
```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	if(a[0]==a[3] && a[1]==a[2]) printf("YES\n");
	else printf("NO\n");
}
```
沒有告訴幾位數
```c
#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[100];
	scanf("%s",&a);
	
	int len=strlen(a);
	
	for(i=0;i<len/2;i++){
		if(a[i]!=a[len-1-i])break;
	}
	
	if(i==len/2) printf("YES\n");
	else printf("NO\n");
	
}
```


## 函數反序排列數字
設計一個函數f(n)，該函數可以傳回整數n的數字反序排列所組成的整數。 
數字範圍：整數 1 – 9999 (不含10的倍數) 
```c
#include <stdio.h>
void f(int n)
{
	printf("%d",n%10);
	if(n>=10) f(n/10);
}

int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	printf("\n");	
}
```

## 陣列找出現次數
讀入一個正整數的數列(逐一輸入正整數，輸入0表示結束，數列至多包含10個整數)，之後再讀入一個正整數，程式可以找出該整數出現在數列中的次數。 
數字範圍：正整數 1 – 9 
```c
#include <stdio.h>
int main()
{
	int i;
	int a[11];
	for(i=0;i<11;i++){
		scanf("%d",&a[i]);
		if (a[i]==0) break;
	}
	int x;
	scanf("%d",&x);
	int n=i;
	int count=0;
	for(i=0;i<n;i++){
		if(a[i]==x) count++;
	}
	printf("%d\n",count);
	
}

```

## 判斷大小
寫一方法能傳入2個整數，如果第一個數字比第二個數字小，則回傳-1;如果兩個數字相等，則回傳0; 如果第一個數字比第二個數字大，則回傳1。印出比較後的結果。
```c
#include <stdio.h>
int f(int a,int b){
	if (a<b) return -1;
	else if(a>b) return 1;
	else return 0;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}

```

## 計算一列整數的總和
請撰寫一個程式計算並印出數個整數的加總。假設以999當成警示值。
```c
#include <stdio.h>
int main()
{
	int a;
	int sum=0;
	while(a!=999)
	{
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);
		sum+=a;
	}
	printf("The total is: %d",sum-999);
}

```
