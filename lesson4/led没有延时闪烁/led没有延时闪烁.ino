unsigned long int ev1 = 0; //���ڼ�¼ʱ��
int led_val = 0; //���ڴ洢led��״̬
void setup()
{
	pinMode(13, OUTPUT);
	ev1 = millis(); //��ʼ��ʱ���

}

void loop()
{

	if (millis() - ev1 >= 500) { //����ǰ��ʱ����֮ǰ��ʱ������500������500ms��ִ�У�Ҳ������ʱ500ms
		digitalWrite(13,led_val); //��led��ʾֵ led_val
		led_val = ~led_val; //��led��ֵȡ��
		ev1 = millis(); //ִ��������ʱ���
  }

}
