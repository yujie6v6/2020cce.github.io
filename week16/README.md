# 互動程式
## 簡單認識弧度
![2021-06-11 (3)](https://user-images.githubusercontent.com/79676845/121621888-9a2a3400-ca9f-11eb-8771-6defec973630.png)
```c
void setup(){
  size (400,200);
  fill(255,0,0);
  textSize(40);
}
int degree=0;
void draw(){
 background(194,173,232);
 arc(100,100,180,180,radians(90),radians(180));
}
```

## 大轉盤家推推樂
```c
void setup(){
  size (400,200);
  fill(85,55,138);
  textSize(40);
}
float shift=0,v=10,x=0;
void mousePressed(){
 v=random(10)+5; //+5讓他數字不會太小導致太慢
}
void draw(){
 background(194,173,232);
 for(int i=0;i<24;i++){
   if(i%3==0) fill(0);
   if(i%3==1) fill(255);
   if(i%3==2) fill(81,194,237);
   if(i==0) fill(237,81,149);
   float start=radians(00+shift+i*360/24);
   float stop=radians(360/24+shift+i*360/24);
   arc(100,100,180,180,start,stop);
 }
 if(v>0.1){
   shift+=v;//轉動數字
   v=v*0.99;//速度會慢慢減速
   x+=v*0.2;
 }
 text(shift,200,100); //印shift
 text(v,200,150);//印轉動速度
 rect(x,150,50,50);
}
```
# 實習課
## 基礎題：整數最大值、最小值
請設計一個程式，該程式可自鍵盤輸入一個由數字所組成字串(註解：空白相隔及非0數字)，並由0結尾。例如: 1 2 3 4 5 0 或 23 -31 15 8 0  並將該字串中所有的整數由小而大重新排列並印出如下所述的結果[最小值,最大值] 當自鍵盤輸入 1 5 4 3 2 0時，會印出 [1,5] 當自鍵盤輸入23 -31 15 8 0時，會印出 [-31,23]  

```c
#include <stdio.h>
int main()
{
	int n,min,max;
	scanf("%d",&n);
	min=n;
	max=n;
	while(n!=0)
	{
		scanf("%d",&n);
		if(min>n) min=n;
		if(max<n) max=n;	
	}
	printf("[%d,%d]",min,max);
}
```

## 基礎題：計算一組任意數目的整數的總和
輸入一組以0為結尾的任意數目的整數(其中只有最後一個整數可以為0)後計算所有輸入的正整數總和(負數不加進總和)。例如: 自鍵盤輸入 1 2 3 4 5 0 將會印出 15 自鍵盤輸入 22 11 44 0 將會印出 77 自鍵盤輸入 33 -2 9 4 55 0 會印出 101  
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n>0) ans+=n;
		scanf("%d",&n);	
	}
	printf("%d",ans);

}
```

## 進階題：拆解輸入的正整數
輸入一個不大於20000的正整數後，依據下述要求印出其結果，例如: EX1. 自鍵盤輸入 153 將會印出 3 50 100 EX2. 自鍵盤輸入 12345 將會印出 5 40 300 2000 10000 EX3. 自鍵盤輸入 1503 將會印出 3 0 50 100 
```c
#include <stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d ",(n%10)*i);
		n/=10;
		i*=10;
	}
}
```

## 進階題：計算級數的值
定義級數 f(n)=1+3+5+...+(2*n+1) 例如: f(1)=1+3=4 f(2)=1+3+5=9 f(3)=1+3+5+7=16 f(4)=1+3+5+7+9=25; f(5)=1+3+5+7+9+11=36 請完成一個程式的設計，使得當使用者自鍵盤輸入一個小於1520的任意正整數n時，會印出f(n)的值，輸出範例如下: 當自鍵盤輸入4時，會印出 f(4)=25 當自鍵盤輸入5時，會印出 f(5)=36 
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=(n*2+1);i+=2){
		ans+=i;
	}
	printf("f(%d)=%d",n,ans);
}
```

## 進階題：大於漸增數列總和之最小整數
大於漸增數列總和之最小整數題目內容：輸入一個整數K，找出最小整數N，使得1+2+3+…+N 的總和大於K。 Ex.N=1 , 1=1<=K N=2 , 1+2=3 <=K N=3 , 1+2+3=6 <=k N=4 , 1+2+3+4=10 <=K N=5 , 1+2+3+4+5=15 > K 數字範圍：整數K範圍 10-1000 
```c
#include <stdio.h>
int main()
{
	int k,i,ans=0;
	scanf("%d",&k);
	for(i=1;i<k;i++){
		ans+=i;
		if(ans>k) break;
	}
	printf("%d",i);
}
```

