void setup() {
  // put your setup code here, to run once:
pinMode(D5,INPUT);
pinMode(D2,INPUT);
pinMode(D4,OUTPUT):
pinMode(D3,OUTPUT);
}

void loop() {
  int t = digitalRead(D5);
  int y = digitalRead(D2);
  if(t>500){
    digitalWrite(D4,HIGH);
    delay(5000);
    }
    else{
      digitalWrite(D4,LOW);
      delay(5000);
    }
    if(y>25){
      digitalWrite(D3,HIGH);
      delay(5000);
    }
    else{
      digitalWrite(D3,LOW);
      delay(5000);
    }
}
