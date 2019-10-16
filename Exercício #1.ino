
#define LED 13
#define BUT 6

bool state;
unsigned long int t1;


void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(BUT, INPUT);
  state=LOW;
  t1=millis();

}

void loop()
{
  if(millis()-t1>=1000){
    
    state=!state;
    t1=millis();
    
    }
  
  digitalWrite(LED, state);
}
