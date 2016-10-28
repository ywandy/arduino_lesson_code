//频率变化的led,随机频率
int freq = 0;
void setup() {
  // put your setup code here, to run once:
 pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  freq = random(100,1000);
  digitalWrite(13,1);
  delay(freq);
  digitalWrite(13,0);
  delay(freq);
}
