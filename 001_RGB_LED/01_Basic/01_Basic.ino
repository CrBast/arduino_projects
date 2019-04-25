/**
 * Basic use of the RGB LED
 */

// Define color by Digital ports Output
const int LED_G = 8;
const int LED_B = 12;
const int LED_R = 13;

void setup()
{
  Serial.begin(9600); //DEBUG
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  int colors[] = {LED_R, LED_G};
  setColor(colors);
}

void loop(){}

void setColor(int colors[]){
  PORTD = 0;
  int size = sizeof(*colors);
  for(int id = 0; id <= size; id++){
    digitalWrite(colors[id], HIGH);  
    Serial.println((String)colors[id] + " : " + digitalRead(colors[id])); //DEBUG
  }
}

