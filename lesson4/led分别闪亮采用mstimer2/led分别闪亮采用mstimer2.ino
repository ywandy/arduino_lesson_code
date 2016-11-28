#include <MsTimer2.h>
int led_val = 0;

void blink_other_led(void) {
	digitalWrite(11, led_val);
	led_val = ~led_val;
} //��������Ͷ�����ķ�����а󶨡�

void setup()
{
	pinMode(13, OUTPUT);
	pinMode(11, OUTPUT);
	MsTimer2::set(1000, blink_other_led); //����MsTimer2�������ж����������ÿ1000msִ��һ�κ���
											//blink_other_led
	MsTimer2::start(); //����������  
}

void loop()
{
	digitalWrite(13, HIGH);
	delay(500);
	digitalWrite(13, LOW);
	delay(500); //�����loop����дdelay������������һ��ռ��CPU�ܴ���¼�����Ϊ������г�ʱ�����ʱ
}
