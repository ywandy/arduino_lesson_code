#include <MsTimer2.h>
int led_val = 0;

void blink_other_led(void) {
	digitalWrite(11, led_val);
	led_val = ~led_val;
} //这个函数和多任务的服务进行绑定。

void setup()
{
	pinMode(13, OUTPUT);
	pinMode(11, OUTPUT);
	MsTimer2::set(1000, blink_other_led); //采用MsTimer2这个库进行多任务操作，每1000ms执行一次函数
											//blink_other_led
	MsTimer2::start(); //启动多任务  
}

void loop()
{
	digitalWrite(13, HIGH);
	delay(500);
	digitalWrite(13, LOW);
	delay(500); //这里的loop正常写delay，当做这里有一个占用CPU很大的事件，因为这里进行长时间的延时
}
