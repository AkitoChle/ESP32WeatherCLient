#include <DHT.h>
#include <Arduino.h>
#include <WebServer.h>
#include <WiFi.h>

const char* ssid = "Redmi Note 9 Pro";
const char* password = "21012012";

WebServer server(80);
DHT dht(18,DHT11);
float temp, hum;

String html_page(float temperature, float humidity){
  String html = "<!DOCTYPE html><html><head><meta http-equiv='refresh' content='5'>";
  html += "<title>DHT11</title></head><body>";
  html += "<h1>See Temperature and Humidity from DHT11 below</h1>";
  html += "<p>Temperature: <strong>"+ String(temperature) + " C</strong></p>";                        
  html += "<p>Temperature: <strong>"+ String(humidity) + " %</strong></p>";
  html += "</body></html>";                  
}

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {

  temp = dht.readTemperature();
  hum = dht.readHumidity();

}
