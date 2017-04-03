#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 2, 3, 4, 5);

#define sensor_pin A0
#define delayDO 8

int senValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor_pin, INPUT);
  pinMode(delayDO, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 1);
  senValue = analogRead(sensor_pin); //Read data from sensor
  lcd.print(senValue);

  //Check Data from sensor to do dondition
  if(senValue >= 450){
    delay(100);
    digitalWrite(delayDO, HIGH);
    delay(5000);
  }else{
    delay(100);
    digitalWrite(delayDO, LOW);
    delay(100);
  }

  delay(1000);

}
