# 程式碼們

## 第一週實習課

1.找零錢 : 假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。

![找零錢](https://ppt.cc/fer6jx@.jpg)
```c
#include <stdio.h>
int main()

{
	int a;
	scanf("%d",&a);
	printf("%d=50*%d+5*%d+1*%d\n",a,a/50,a%50/5,a%5);
}

```

2.因數個數 : 輸入一個正整數，顯示所有該正整數因數的個數。

![因數個數](https://ppt.cc/f5Ocsx@.jpg)
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int n=0;
	for(int i=1;i<=a;i++){
		if(a%i==0)
		n++;	
	}
	printf("%d\n",n);
}
```

3.找倍數：

![找倍數](https://ppt.cc/fIxw3x@.jpg)
```c
#include <stdio.h>
int main()
{
	int a[10],ans=0;
	for(int i=0;i<10;i++){
	scanf("%d",&a[10]);
	if(a[10]%3==0)
	ans++;
	}
	
	printf("%d\n",ans);
}
```
