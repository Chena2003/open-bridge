#include <Servo.h>
 
Servo myservoL;  // 定义Servo对象来控制
Servo myservoR;  // 定义Servo对象来控制
int pos = 0;    // 角度存储变量
int left = 9;
int right = 8;

void setup() {
  myservoL.attach(right);  // 控制线连接数字右舵机
  myservoR.attach(left);  // 控制线连接数字右舵机
}
 
void loop() {
//  for (pos = 90; pos <= 180; pos ++) { // 0°到180°
//    // in steps of 1 degree
//    myservoL.write(pos);              // 舵机角度写入
//    myservoR.write(pos);              // 舵机角度写入
//    delay(10);                       // 等待转动到指定角度
//  }
//
//  delay(1000); 
// 
//  for (pos = 180; pos >= 90; pos --) { // 从180°到0°
//    myservoL.write(pos);              // 舵机角度写入
//    myservoR.write(pos);              // 舵机角度写入
//    delay(10);                       // 等待转动到指定角度
//  }
//  
//  delay(1000); 

myservoL.write(90);
myservoR.write(90);
}
