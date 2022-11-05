int inputPin = 3;
int motion = LOW;
int stat = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  stat = digitalRead(inputPin);
  if(stat == HIGH){
    Serial.println("High");
    motion = HIGH;
  }
  else{
    Serial.println("LOW");
    motion = LOW;
  }
}
