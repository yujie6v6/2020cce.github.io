## UVA 10783
![10783_page-0001](https://user-images.githubusercontent.com/79676845/135036536-11caf92f-120d-469d-bed5-9ee315d2c132.jpg)

```c
#include <stdio.h>
int main()
{
    int T,a,b,sum;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d",&a,&b);
        sum=0;
        for(int j=a;j<=b;j++){
            if(j%2!=0)sum=sum+j;
        }
        printf("Case %d:%d",i+1,sum);
    }
}

```
