function setup(){
  createCanvas (400,200);
  fill(85,55,138);
  textSize(40);
}
let shift=0,v=10,x=0;
function mousePressed(){
 v=random(10)+5; //+5讓他數字不會太小導致太慢
}
function draw(){
 background(194,173,232);
 for(let i=0;i<24;i++){
   if(i%3==0) fill(0);
   if(i%3==1) fill(255);
   if(i%3==2) fill(81,194,237);
   if(i==0) fill(237,81,149);
   let start=radians(00+shift+i*360/24);
   let stop=radians(360/24+shift+i*360/24);
   arc(100,100,180,180,start,stop);
 }
 if(v>0.1){
   shift+=v;//轉動數字
   v=v*0.99;//速度會慢慢減速
   x+=v*0.2;
 }else{//不轉的時候
   //判斷是否得獎
 }
 text(shift,200,100); //印shift
 text(v,200,150);//印轉動速度
 rect(x,150,50,50);
}
