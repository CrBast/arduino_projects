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

  int colors[] = {LED_R, LED_G, LED_B};
  setColor(colors, 3);
}

void loop(){
  delay(2000);
  int colors[] = {LED_R, LED_G, LED_B};
  setColor(colors, 3);
  delay(2000);
  int colors2[] = {LED_R};
  setColor(colors2, 1);
  delay(2000);
  int colors3[] = {LED_G};
  setColor(colors3, 1);
  delay(2000);
  int colors4[] = {LED_B};
  setColor(colors4, 1);
}

void setColor(int colors[], int arraySize){
  PORTB = 0b000000; // PORTS 8 to 13 on LOW
  for(int id = 0; id < arraySize; id++){
    digitalWrite(colors[id], HIGH);  
    Serial.println((String)colors[id] + " : " + digitalRead(colors[id])); //DEBUG
  }
}

