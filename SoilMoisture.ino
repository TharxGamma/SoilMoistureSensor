#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SensorPin 2

void Display(int);

// Parameters as follows. Starting location of screen and size of LCD screen
LiquidCrystal_I2C LCD(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  LCD.init();
  LCD.backlight();
  
  pinMode(SensorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(SensorPin));
  int SensorResult = digitalRead(SensorPin);
  delay(500);
  Display(SensorResult);

}

void Display(int S)
{
  LCD.setCursor(0, 0); // Set the cursor on the first column and first row
  if(S == 1)
  {
    LCD.print("Soil is dry");
  } else {
    LCD.print ("Soil is wet");
  }

}
