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
int dl = 80;

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
  delay(dl);
  digitalWrite(led1, LOW);
  delay(dl);
  
  digitalWrite(led2, HIGH);
  delay(dl);
  digitalWrite(led2, LOW);
  delay(dl);
  
  digitalWrite(led3, HIGH);
  delay(dl);
  digitalWrite(led3, LOW);
  delay(dl);
  
  digitalWrite(led4, HIGH);
  delay(dl);
  digitalWrite(led4, LOW);
  delay(dl);
  
  digitalWrite(led5, HIGH);
  delay(dl);
  digitalWrite(led5, LOW);
  delay(dl);
  
  digitalWrite(led10, HIGH);
  delay(dl);
  digitalWrite(led10, LOW);
  delay(dl);
  
  digitalWrite(led9, HIGH);
  delay(dl);
  digitalWrite(led9, LOW);
  delay(dl);
  
  digitalWrite(led8, HIGH);
  delay(dl);
  digitalWrite(led8, LOW);
  delay(dl);
  
  digitalWrite(led7, HIGH);
  delay(dl);
  digitalWrite(led7, LOW);
  delay(dl);
  
  digitalWrite(led6, HIGH);
  delay(dl);
  digitalWrite(led6, LOW);
  delay(dl);
  
  
}
