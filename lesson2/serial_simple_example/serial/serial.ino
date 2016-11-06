//串口的使用

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600); //初始化串口，并设定波特率为9600
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("hello world!");//输出一行hello world
  delay(1000); //延时1秒
}
