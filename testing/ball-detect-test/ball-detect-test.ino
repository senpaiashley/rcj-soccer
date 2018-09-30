#define IR_PORT A0
#define LED_PORT 2

void setup() {
  // put your setup code here, to run once:
  pinMode(IR_PORT, INPUT);
  
  pinMode(LED_BUILTIN, OUTPUT);
    
  pinMode(LED_PORT, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
  Serial.println(analogRead(IR_PORT));
  if(analogRead(IR_PORT) < 400)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(LED_PORT, HIGH);
  }
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED_PORT, LOW);
  

  //digitalWrite(LED_BUILTIN, HIGH);
}
