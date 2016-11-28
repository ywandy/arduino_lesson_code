//pwm ºôÎüµÆ Á¬½ÓD5
#include <MsTimer2.h>
int brightness = 0;
int increment = 5;

void fade() {
	for(brightness=0;brightness<=255;brightness+=increment){ 
		delay(20);
		analogWrite(5, brightness); 
	}
	delay(100);
	for(brightness=255;brightness>=0;brightness-=increment)
	{
		delay(20);
		analogWrite(5, brightness);
	}
	delay(100);
}

void setup()
{

  /* add setup code here */

}

void loop()
{
	fade();
  /* add main program code here */

}
