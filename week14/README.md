# JAVA互動式程式設計
## 亂數抽籤
```C
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
