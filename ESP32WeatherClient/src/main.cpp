#include <DHT.h>
#include <Arduino.h>

DHT dht(18,DHT11);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  delay(2000);
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Температура: ");
  Serial.print(temp);
    
  Serial.print("Влажность: ");
  Serial.print(humidity);
  Serial.println(" %");
}
