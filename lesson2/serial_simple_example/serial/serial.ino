//串口的使用

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600); //初始化串口，并设定波特率为9600
}

void loop() {
  Serial.println("hello world 1st");//输出一行hello world采用Arduino自带的换行
  Serial.print("hello world 2nd \n");//输出一行hello world带标准C的换行
  Serial.print("hello world 3rd");//输出一行hello world不带换行符
  delay(1000); //延时1秒
}
