#include <LiquidCrystal_I2C.h>

int sens=4; //Initialising sensor pin as 4
int count=0; //Initialising counter value as 0
int out;
LiquidCrystal_I2C lcd(0x27,16,2); 


void setup()
{
  pinMode(sens, INPUT); 
  Serial.begin(9600); //For serial communication
  lcd.init(); //Initialises LCD display
  lcd.begin(16,2); 
  lcd.backlight();
  lcd.setCursor(1,1); //Tells the coordinates in which the text should be printed
  lcd.print("Count");
}

void loop()
{
  out = digitalRead(sens); //OUT variable stores 1 or 0 depending upom the sensor output
  if(out== HIGH) //logic for counter
  {
    count++;
  }
  
  lcd.setCursor(8,1); 
  lcd.print(count); //printing in LCD
  delay(90);
}