void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //配置13引脚作为输出引脚，用来显示按键效果
  pinMode(12,INPUT);//配置12引脚作为输入引脚，用来判断按键的状态
}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(12)==0){ //如果按键按下，就亮灯
        digitalWrite(13,HIGH);
      }else{ //否则，灯就不亮
           digitalWrite(13,LOW);
        }
        delay(100); //延时100ms，就是每100
}
