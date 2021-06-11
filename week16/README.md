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
