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
