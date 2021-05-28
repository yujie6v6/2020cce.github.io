# JAVA互動式程式設計
## 亂數抽籤
```java
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
```c
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
```c
int []a= new int[49]; //java陣列宣告
void setup(){
 size(400,200);
 textSize(30);
 for(int i=0;i<49;i++) a[i]=i+1;
}
void draw(){
 background(180,156,228);
 for(int i=0;i<6;i++){//49指秀6個數
  text(a[i],i*50,100); //i*50文字之間距離
 }
}
void mousePressed(){
 for(int i=0;i<10000;i++){
 int i1=(int) random(49),i2=(int) random(49);
 int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }
}
```
