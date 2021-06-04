# 互動程式
## 上課鐘響
```c
import processing.sound.*;
SoundFile player;
void setup(){
 size(400,200);
 textSize(40);
 player = new SoundFile(this, "bell.mp3");
}
 void draw(){
  background(180,156,228); 
  int s=second();
  text(9-s%10,100,100);
  if(9-s%10==0  && !player.isPlaying()){
    player.play();
  }
 }
 ```
 ## 將processing弄成網頁
 新增模式ps.js將java程式碼用下面網站轉換就可以了
 http://faculty.purchase.edu/joseph.mckay/p5jsconverter.html

# 實習課
## 基礎題：平面兩座標的面積
輸入平面兩點座標的四個整數值(x1,y1,x2,y2)，計算並顯示這兩點所圍之面積。(EX.輸入(x1,y1,x2,y2)，計算(x1,y1)、(x1,y2)、(x2,y2)、(x2,y1)所圍面積。
```c
#include <stdio.h>
#include <stdlib.h>  //絕對值函式
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d",abs(a-c)*abs(b-d)); //abs()絕對值
}
```

## 進階題：秒數換算
輸入總秒數(介於0~80000 之間的整數)，將其轉換成時:分:秒格式。
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%02d:%02d:%02d",n/60/60,n/60%60,n%60); //如果是1位數就補0

}
```

## 進階題：億萬富翁
有一個富翁的財產超過一萬億，所以常常搞不清楚財產到底有多少，現在輸入一個整數N表示富翁的財產總額，請您幫他在財產總額上，從後方每三位加一個逗號，方便閱讀。
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	for(int i=0;i<strlen(a);i++){
		if((strlen(a)-i)%3==0 && i!=0) printf(",");  //ex:長度5 12345 a[2]-->5-2=3
		printf("%c",a[i]);
	}

}
```
