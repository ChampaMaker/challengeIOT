#define button 7
#define led1 2
#define led2 3
#define led3 4
#define led4 5

bool StateBTN;
bool previous;
bool State = 0;
int num = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  StateBTN = digitalRead(button);
  
  if(StateBTN == HIGH && previous == LOW){
    num++;
    Serial.print("CountPress: ");
    Serial.println(num);
  }
  previous = StateBTN;

  if(num % 5 == 0){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }

  if(num % 5 == 1){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }

  if(num % 5 == 2){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
  }

  if(num % 5 == 3){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  }

  if(num % 5 == 4){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
}
