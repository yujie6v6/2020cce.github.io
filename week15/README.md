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
