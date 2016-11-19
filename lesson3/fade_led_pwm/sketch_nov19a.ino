int fade = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
}


void fade_led(){
    int i,j;
    for(i=0;i<255;i+=5){
        analogWrite(3,i);
        delay(40);
      }
    for(j=i;j>=0;j-=5){
        analogWrite(3,j);
        delay(40);
      }
}


void loop() {
  fade_led();
  delay(500);
}
