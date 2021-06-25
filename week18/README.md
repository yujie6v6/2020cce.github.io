## 互動程式
# 開鏡頭
```c
import processing.video.*; //video外掛
Capture cam; //global全域變數
void setup(){
 size(640,480); 
 println(Capture.list());
 cam=new Capture(this,"HD WebCam"); //初始化 ""裡面鏡頭名稱
 cam.strat(); //開啟webcam
}
void draw(){
 if(cam.available())cam.read(); //讀視訊
 set(0,0,cam);
}
```

# 開影片
```c
import processing.video.*;
Movie movie; //大寫是形狀 小寫物件變數
void setup(){
 size(640,480); 
 movie=new Movie(this,"video.mov");
 movie.loop(); //影片開始一直重複播放
}
void draw(){
 if(movie.available()){ 
  movie.read(); 
 }
 set(0,0,movie);
}

```
