unsigned long int ev1 = 0; //用于记录时间
int led_val = 0; //用于存储led的状态
void setup()
{
	pinMode(13, OUTPUT);
	ev1 = millis(); //初始化时间点

}

void loop()
{

	if (millis() - ev1 >= 500) { //当当前的时间点和之前的时间点相差500，就是500ms就执行，也就是延时500ms
		digitalWrite(13,led_val); //让led显示值 led_val
		led_val = ~led_val; //让led的值取反
		ev1 = millis(); //执行完后更新时间点
  }

}
