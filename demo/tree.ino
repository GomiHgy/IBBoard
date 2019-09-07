
int count;



void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  
  count = 0;
}

void loop() {
  if(count == 0){
    digitalWrite(0,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
  }
  else if(count == 1){
    digitalWrite(1,LOW);
    digitalWrite(0,HIGH);
    digitalWrite(2,HIGH);
  }
  else if(count == 2){
    digitalWrite(2,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(0,HIGH);
  }
  else {
    digitalWrite(2,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(0,HIGH);
  }
  if(count == 2){
    count =0;
  }
  else {
    count ++;
  }
  delay(100);
}
