int led1=13;
 int led2=12;
 int led3=11;
 int led4=10;
 int led5=9;
 int led6=8;
 int led7=7;
 int led8=6;
 int led9=5;
 
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
Serial.begin(9600); 

}

void loop() {
  if(Serial.available()){
    int a=Serial.read();
    
    if(a== '1')
      digitalWrite(led1, HIGH);
    if(a== 'a')
      digitalWrite(led1, LOW);
    if(a== '2')
      digitalWrite(led2, HIGH);
       if(a== 'b')
      digitalWrite(led2, LOW);
    if(a== '3')
      digitalWrite(led3, HIGH);
      if(a== 'c')
      digitalWrite(led3, LOW);
    if(a== '4')
      digitalWrite(led4, HIGH);
      if(a== 'd')
      digitalWrite(led4, LOW);
    if(a== '5')
      digitalWrite(led5, HIGH);
      if(a== 'e')
      digitalWrite(led5, LOW);
    if(a== '6')
      digitalWrite(led6, HIGH);
     if(a== 'f')
      digitalWrite(led6, LOW);
    if(a== '7')
      digitalWrite(led7, HIGH);
        if(a== 'g')
      digitalWrite(led7, LOW);
    if(a== '8')
      digitalWrite(led8, HIGH);
     if(a== 'h')
      digitalWrite(led8, LOW);
    if(a== '9')
      digitalWrite(led9, HIGH);
      if(a== 'i')
          digitalWrite(led9, LOW);
       }}

     

  
