//written by Emily Flood on Jan 14, 2020
//the "fading" is not my code, it is from the "fading" example in arduino.

// the setup routine runs once when you press reset:
void setup() {
  //declaring all pins being used as outputs
  pinMode(13, OUTPUT); //using pin 13
  pinMode(10,OUTPUT); //using pin 10
  pinMode(9,OUTPUT); //using pin 9
}

// the loop routine runs over and over again forever:
void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  
  //code to make pin 13 blink
    digitalWrite(13,HIGH);
    delay(300);//delay by 0.3 seconds
    digitalWrite(13,LOW);
    delay(100);//delay  by 0.1 seconds

  //code to make pin 10 blink
    digitalWrite(10,HIGH);
    delay(50);//delay by 0.05 seconds
    digitalWrite(10,LOW);
    delay(50);//delay  by 0.05 seconds
}
