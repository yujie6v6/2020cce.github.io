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
