#include <Servo.h>
 
Servo myservoL;  // 左舵机
Servo myservoR;  // 右舵机
int pos = 0;    // 角度存储变量
int left = 8;
int right = 9;

void setup() {
  myservoL.attach(left);  // 控制线连接数字右舵机
  myservoR.attach(right);  // 控制线连接数字右舵机
}
 
void loop() {
  // 旋转
 for (pos = 90; pos <= 180; pos ++) { // 90°到180°
   myservoL.write(pos);              // 舵机角度写入
   myservoR.write(pos);              // 舵机角度写入
   delay(10);                       // 等待转动到指定角度
 }

 delay(1000); 

 for (pos = 180; pos >= 90; pos --) { // 从180°到90°
   myservoL.write(pos);              // 舵机角度写入
   myservoR.write(pos);              // 舵机角度写入
   delay(10);                       // 等待转动到指定角度
 }
 
 delay(1000); 

// 停止
// myservoL.write(90);
// myservoR.write(90);
}
