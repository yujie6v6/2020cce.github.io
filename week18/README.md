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

## 撲克牌洗牌後抽五張
```c
String []face={"Spade","Heart","Dimand","Club"};
String []Num={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int []Card=new int[52];
void setup(){
size(600,200);
for(int i=0; i<52; i++) Card[i] = i;
shuffleCard();
}
void shuffleCard(){
for(int i=0; i<20000; i++){//洗牌洗20000次
int a = int(random(52));
int b = int(random(52));
int temp = Card[a];
Card[a] = Card[b];
Card[b] = temp;
}
}
void drawCard(int i, int x, int y){
int f = i/13, num = i%13;
fill(255); rect(x,y, 100,150);
if( f==1 || f==2 ) fill(255,0,0);
else fill(0);
textAlign(CENTER,CENTER);
textSize(20); text( face[f], x+50,y+50);
textSize(40); text( Num[num], x+50, y+100);
}
void draw(){
for(int i=0; i<5; i++){
drawCard( Card[i], i*110, 0 );
}
}
void mousePressed(){
shuffleCard();
}

