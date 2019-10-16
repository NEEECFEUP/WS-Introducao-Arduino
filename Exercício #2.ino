#define BUT 6
#define LED 13

int stateB;
void setup() {

  
  pinMode(LED, OUTPUT);
  pinMode(BUT, INPUT);
  Serial.begin(9600);

}

void loop() {

 stateB=digitalRead(BUT);
 Serial.println(stateB);
 if(stateB==1){digitalWrite(LED, stateL);
    Serial.println("im here");
    digitalWrite(LED, HIGH);
 }

 digitalWrite(LED, LOW);

}
