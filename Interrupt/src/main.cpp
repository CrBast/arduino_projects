#include <Arduino.h>

#define BTN_01 2
#define LED_01 13

volatile byte state = 0;

/* Declare all methods */
void onClickButton();

void setup()
{
  Serial.begin(9600);
  pinMode(BTN_01, INPUT_PULLUP);
  pinMode(LED_01, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(BTN_01), onClickButton, FALLING);
}

void loop()
{
  digitalWrite(LED_01, state);
}

void onClickButton()
{
  Serial.println("BTN_01");
  state = !state;
}