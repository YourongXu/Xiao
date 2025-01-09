#include <Arduino.h>  // 需要包含此库以便使用 Arduino 函数

// 初始化设置
void setup() {
  Serial.begin(115200);  // 设置串口通信速度为 115200
}

// 循环函数
void loop() {
  Serial.println("Hello XIAO!");  // 在串口监视器中输出字符串
  delay(2000);  // 延迟 2000 毫秒 (2 秒)
}
