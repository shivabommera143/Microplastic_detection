#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

const int sensorPin = A0;   
const int numSamples = 50;  
int cleanBaseline = 800;    
int thresholdDrop = 200;    

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Microplastic");
  lcd.setCursor(0, 1);
  lcd.print("Detector Ready");
  delay(2000);
}

void loop() {
  long sum = 0;
  for (int i = 0; i < numSamples; i++) {
    sum += analogRead(sensorPin);
    delay(5);
  }

  int intensity = sum / numSamples; 

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Intensity: ");
  lcd.print(intensity);

  lcd.setCursor(0, 1);
  if (intensity < (cleanBaseline - thresholdDrop)) {
    lcd.print("Microplastics: YES");
  } else {
    lcd.print("Microplastics: NO ");
  }

  Serial.print("Intensity: ");
  Serial.println(intensity);

  delay(500);
}
