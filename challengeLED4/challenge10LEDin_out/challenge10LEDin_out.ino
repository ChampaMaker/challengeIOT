#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define led10 11
int dl = 800;

void setup() {
  // put your setup code here, to run once:
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

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  digitalWrite(led10, HIGH);
  delay(dl);
  digitalWrite(led1, LOW);
  digitalWrite(led10, LOW);
  delay(dl);
  
  digitalWrite(led2, HIGH);
  digitalWrite(led9, HIGH);
  delay(dl);
  digitalWrite(led2, LOW);
  digitalWrite(led9, LOW);
  delay(dl);

  digitalWrite(led3, HIGH);
  digitalWrite(led8, HIGH);
  delay(dl);
  digitalWrite(led3, LOW);
  digitalWrite(led8, LOW);
  delay(dl);

  digitalWrite(led4, HIGH);
  digitalWrite(led7, HIGH);
  delay(dl);
  digitalWrite(led4, LOW);
  digitalWrite(led7, LOW);
  delay(dl);

  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  delay(dl);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  delay(dl);
  
  // ================================
  
  digitalWrite(led4, HIGH);
  digitalWrite(led7, HIGH);
  delay(dl);
  digitalWrite(led4, LOW);
  digitalWrite(led7, LOW);
  delay(dl);

  digitalWrite(led3, HIGH);
  digitalWrite(led8, HIGH);
  delay(dl);
  digitalWrite(led3, LOW);
  digitalWrite(led8, LOW);
  delay(dl);

  digitalWrite(led2, HIGH);
  digitalWrite(led9, HIGH);
  delay(dl);
  digitalWrite(led2, LOW);
  digitalWrite(led9, LOW);
  delay(dl);
  
}
