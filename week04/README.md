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






