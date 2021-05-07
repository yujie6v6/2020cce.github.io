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
