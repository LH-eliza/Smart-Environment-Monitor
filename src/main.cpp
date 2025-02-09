#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define LED_R 9
#define LED_G 10
#define LED_B 11

#define TEMP_PIN A0

void setup() {
    Serial.begin(9600);
    
    lcd.begin(16, 2);
    
    pinMode(LED_R, OUTPUT);
    pinMode(LED_G, OUTPUT);
    pinMode(LED_B, OUTPUT);
}

float readTemperature() {
    int sensorVal = analogRead(TEMP_PIN);
    
    float voltage = (sensorVal * 5.0) / 1024.0;

    float temperature = (voltage - 0.5) * 100;
    
    return temperature;
}

void loop() {
    float temperature = readTemperature();
    
    float humidity = 50 + (random(-10, 10) / 10.0);
    
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temperature, 1);
    lcd.print("C");
    
    lcd.setCursor(0, 1);
    lcd.print("Humid: ");
    lcd.print(humidity, 1);
    lcd.print("%");
    
    updateLED(temperature);
    
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print("°C, Humidity: ");
    Serial.print(humidity);
    Serial.println("%");
    
    delay(2000);
}

void updateLED(float temperature) {
    if (temperature < 20) {
        analogWrite(LED_R, 0);
        analogWrite(LED_G, 0);
        analogWrite(LED_B, 255);
    } else if (temperature > 25) {
        analogWrite(LED_R, 255);
        analogWrite(LED_G, 0);
        analogWrite(LED_B, 0);
    } else {
        analogWrite(LED_R, 0);
        analogWrite(LED_G, 255);
        analogWrite(LED_B, 0);
    }
}