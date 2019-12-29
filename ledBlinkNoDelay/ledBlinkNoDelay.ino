
#define ledPin 2
#define ledPin2 3
int ledState = LOW;             // ledState used to set the LED
int ledState2 = LOW;
unsigned long previousMillis = 0;        // will store last time LED was updated
unsigned long previousMillis2 = 0;
const long interval = 100;           // interval at which to blink (milliseconds)
const long interval2 = 400;

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }

  if (currentMillis - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis;
    ledState2 = !ledState2;
    digitalWrite(ledPin2, ledState2);
  }
  
}
