
int dl = 100;
double countLED = 5;
int midleLED;
double d;
int pinMiddle;
int pin1 = 1;
int pin2 = countLED + 2;

void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i <= countLED + 1; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x = 1; x <= countLED / 2; x++){
    
    pin1++;
    pin2--;
    
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,HIGH);
    delay(dl);
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,LOW);
    delay(dl);
  }
  
  if(int(countLED) % 2 != 0){
    d = countLED / 2;
    midleLED = ++d ;
    digitalWrite(midleLED + 1,HIGH);
    delay(dl);
    digitalWrite(midleLED + 1,LOW);
    delay(dl);
    
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,HIGH);
    delay(dl);
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,LOW);
    delay(dl);
    
  }
  
  for(int x = 1; x <= (countLED / 2) - 2 ; x++){
    pin1--;
    pin2++;
    
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,HIGH);
    delay(dl);
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,LOW);
    delay(dl); 
  }
  pin1 = pin1 - 2;
  pin2 = pin2 + 2;
}
