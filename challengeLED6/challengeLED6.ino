#define led1 10
#define led2 8
#define led3 6
#define led4 4
#define led5 2
#define led6 11
#define led7 9
#define led8 7
#define led9 5
#define led10 3

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(led7, OUTPUT);
    pinMode(led8, OUTPUT);
    pinMode(led9, OUTPUT);
    pinMode(led10, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led10, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(led1, LOW);
  digitalWrite(led10, LOW);
  delay(100);
  
  digitalWrite(led2, HIGH);
  digitalWrite(led9, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led9, LOW);
  delay(100);
  
  digitalWrite(led3, HIGH);
  digitalWrite(led8, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  digitalWrite(led8, LOW);
  delay(100);
  
  digitalWrite(led4, HIGH);
  digitalWrite(led7, HIGH);
  delay(100);
  digitalWrite(led4, LOW);
  digitalWrite(led7, LOW);
  delay(100);
  
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  delay(100);
  
}
