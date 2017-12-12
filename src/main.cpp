#include <Arduino.h>


void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(13, OUTPUT);

}

void loop() {
  //read the pushbutton value into a variable

  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:

    digitalWrite(13, LOW);
    delay(2500);
    digitalWrite(13, HIGH);
    delay(2500);

}
