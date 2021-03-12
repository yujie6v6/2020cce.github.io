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


