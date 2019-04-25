/**
 * Basic use of the RGB LED
 */

// Define color by Digital ports Output
const int LED_G = 9;
const int LED_B = 10;
const int LED_R = 11;

void setup()
{
  Serial.begin(9600); //DEBUG
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  setColor(100, 100, 100);
}

void loop(){
	setColor(random(256), random(256), random(256));
	delay(30);
}

/*
*/
void setColor(int red, int green, int blue){
  PORTB = 0;
  analogWrite(LED_G, green);
  analogWrite(LED_B, blue);
  analogWrite(LED_R, red);
}

