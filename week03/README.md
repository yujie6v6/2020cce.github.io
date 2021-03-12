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

## 指標範例4 (指標就是陣列，陣列就是指標)
```c
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main(){
    int b[10];

    int *p=(int*) malloc(sizeof(int)*10);

    return 0;
}
```

## 計算陣列的平方值
輸入一個整數N，再依序輸入N個整數置於陣列中，計算各元素的平方值，再列出此算出平方值後的陣列。
```c
#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
	
}
```
## 大小寫轉換
讀入一個字串(至多10個字元)，將字串中的大小寫英文字母相互轉換(大寫轉為小寫，小寫轉為大寫)後輸出。 

```c
#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",&c);
	int i=0;
	while (c[i]!='\0')
	{
		if('A'<=c[i]&& c[i]<='Z')
		printf("%c",c[i]-'A'+'a');
		
		else if('a'<=c[i]&& c[i]<='z')
		printf("%c",c[i]-'a'+'A');
		
		else printf("%c",c[i]);
		i++;
	}
	printf("\n");
}
```

```c
#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",&c);
	for(int i=0;i<10;i++){
		scanf("%s",&c[i]);
		if(c[i]>='A' && c[i]<='Z'){
			c[i]+=32;
		}
		else if(c[i]>='a' && c[i]<='z'){
			c[i]-=32;
		}
	}
	printf("%s",c);
	printf("\n");
}
```

