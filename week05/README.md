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

## 比較字串
strcmp比較字串
![55555](https://user-images.githubusercontent.com/79676845/112573331-072a1800-8e27-11eb-92e3-e8dceb6b230d.jpg)
```c
#include <stdio.h>
#include <String.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
        printf("左邊大\n");
    } else {
        printf("右邊大\n");
    }
}
```

## 字串排序

將字串由小到大排序
```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
	}//(1)讀進來
	char temp[10];//用來交換的 temp字串
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if( strcmp(line[i],line[j])   >0){//(2)大小錯
				strcpy(temp,line[i]); //temp=a;
				strcpy(line[i],line[j]); //a=b;
				strcpy(line[j],temp); //b=temp;
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}//(3)印出去
}
```
