unsigned long int ev1 = 0;
unsigned long int ev2 = 0;
int led_1_va1 = 0;
int led_2_val = 0;


void setup()
{
	pinMode(13, OUTPUT);
	pinMode(11, OUTPUT);
	ev1 = millis();
	ev2 = millis();
}	

void loop()
{
	if (millis() - ev1 > 500) {
		digitalWrite(13, led_1_va1);
		led_1_va1 = ~led_1_va1;
		ev1 = millis();
	}else if (millis() - ev2 > 2000) {
		digitalWrite(11, led_2_val);
		led_2_val = ~led_2_val;
		ev2 = millis();
	}
}
