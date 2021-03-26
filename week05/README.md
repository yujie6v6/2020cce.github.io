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
