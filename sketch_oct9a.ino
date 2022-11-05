#include "DHT.h"
#define Type DHT11
int sensePin = 3;
DHT HT(sensePin,Type);
float humidity;
float tempC;
float tempF;


void setup() {
  
  Serial.begin(9600);
  HT.begin();
  delay(5000);

}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);

  Serial.print("Humidity");
  Serial.print(humidity);
  Serial.print("\n");
   Serial.print("Temperature C");
   Serial.print(tempC);
   Serial.print("\n");
    Serial.print("Temperature F");
    Serial.print(tempF);
    Serial.print("\n");
    delay(5000);
}
