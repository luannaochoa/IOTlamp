#define PIN 2
int8_t flag = 1;

void setup() {
  pinMode(PIN, OUTPUT);
  digitalWrite(PIN, HIGH); 
  
}

void loop() {

  if(flag){
    digitalWrite(PIN, HIGH);
    flag = 0;
  } else {
    digitalWrite(PIN, LOW);
    flag = 1;
  }
  delay(100000);
  
}

