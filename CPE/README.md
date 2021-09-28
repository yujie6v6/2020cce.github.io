## UVA 10783
![10783_page-0001](https://user-images.githubusercontent.com/79676845/135036617-4d225b50-5cd0-49d3-93cc-4a2765c8630b.jpg)
輸入T有幾筆資料，再輸入每筆資料的範圍a到b，請你找出a與b之間所有奇數的和。  
例如：範圍 [3, 9] 中所有奇數的和就是 3 + 5 + 7 + 9 = 24。

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
            if(j%2!=0)sum+=j;
        }
        printf("Case %d:%d",i+1,sum);
    }
}

```

## UVA 100

![100_page-0001](https://user-images.githubusercontent.com/79676845/135036726-f22876cd-b139-407f-a9a1-a67b73196fd2.jpg)
![100_page-0002](https://user-images.githubusercontent.com/79676845/135036835-8110ca68-4e0d-45c9-b1aa-481a215b18bf.jpg)
![2021-09-28 (1)](https://user-images.githubusercontent.com/79676845/135040223-4e498a58-cb28-4a65-a8d2-b0d7e5e4ce27.png)
