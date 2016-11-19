//Arduino 电压表程序
float READ_VALUE;
float CAL_VOL;

void setup() {
  Serial.begin(9600); //初始化串口，用来显示电压
}

void loop() {
  READ_VALUE = analogRead(0);
  CAL_VOL = (READ_VALUE / 1023) * 5.0;
  Serial.println(CAL_VOL);
  delay(100);
}
