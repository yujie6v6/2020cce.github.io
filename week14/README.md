# JAVA互動式程式設計
## 亂數抽籤
```javascript 
void setup(){
 size(300,200);
 textSize(30);
}
int ans=0;
void draw(){
  background(180,156,228);
 text(ans,30,30);
}
void mousePressed(){
  ans=(int)random(60);//強制轉型整數
}
```

## 洗牌
```javascript
int []a={1,2,3,4,5,6,7,8,9,10};
void setup(){
  size(400,200);
  textSize(30);
}
void draw(){
  background(180,156,228);
  for(int i=0;i<10;i++){
   text(a[i],i*40,100); 
  }
}
void mousePressed(){
 int i1=(int) random(10);
 int i2=(int) random(10);
 int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
}//交換，行數太擠所以塞成一行，中間是分號

```

## 大樂透
有小bug數字可以一直按
```javascript
int []a= new int[49]; //java陣列宣告
void setup(){
 size(400,200);
 textSize(30);
 for(int i=0;i<49;i++) a[i]=i+1;
 for(int i=0;i<10000;i++){
 int i1=(int) random(49),i2=(int) random(49);
 int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }
}
int N=0;
void draw(){
 background(180,156,228);
 for(int i=0;i<N;i++){//49指秀6個數
  fill(255);ellipse(50+i*50,100,40,40); //白球
  textAlign(CENTER,CENTER); //對齊中間
  fill(0);text(a[i],50+i*50,100); //黑字，50+i*50文字之間距離
 }
}
void mousePressed(){
 N++;
}
```

# 實習課題目
## 進階題：奇數反流
輸入一個整數N，後接N個整數。請將這N個數中的奇數，依照出現順序反向印出。數字範圍：N與整數的範圍 為 1 – 99。
```c
#include <stdio.h>
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=n-1;i>=0;i--){
		if(a[i]%2==1) printf("%d ",a[i]);
	}

}
```

## 基礎題：大位王
輸入一個整數，輸出該整數的最大位的數字。例如：-357的最大位數字為3、1578的最大位數字為1，而0的最大位數字為0。數字範圍：整數 9999 ~ -9999
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=0) n=-n;
	while ((n/10)>0)
	{
		n/=10;
	}
	printf("%d\n",n);
}
```

## 基礎題：把數字倒著印出來
輸入10個整數，把這10個數字倒著印出來。數字範圍：整數1 – 100 
```c
#include <stdio.h>
int main()
{
	char a[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=9;i>=0;i--){
		printf("%d ",a[i]);
	}

}
```
