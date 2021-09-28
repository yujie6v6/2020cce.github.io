## UVA 10783
![10783_page-0001](https://user-images.githubusercontent.com/79676845/135036617-4d225b50-5cd0-49d3-93cc-4a2765c8630b.jpg)


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

## UVA 100

![100_page-0001](https://user-images.githubusercontent.com/79676845/135036726-f22876cd-b139-407f-a9a1-a67b73196fd2.jpg)
![100_page-00021](https://user-images.githubusercontent.com/79676845/135036740-fd743299-1d76-41d8-a754-5347d5c937da.jpg)
