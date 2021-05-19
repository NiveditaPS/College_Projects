int thumb;
int first_finger; 
int second_finger; 
0000000
#include<LiquidCrystal.h>

“//initialize the library by associating any needed LCD interface pin”
“//with the arduino pin number it is connected to”
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 
void setup() {
  “//put your setup code here, to run once:”
  pinMode(A0, INPUT); 
  pinMode(A1, INPUT); 
  pinMode(A2, INPUT); 
  Serial.begin(9600); 
  lcd.begin(16, 2); 
  
}


void loop() 
{
  “//put your main code here, to run repeatedly:”
int thumb = analogRead(A0); 
int first_finger = analogRead(A1); 
int second_finger = analogRead(A2); 
Serial.print(thumb);  
Serial.print("\t");

Serial.print(first_finger); 
Serial.print("\t");


Serial.print(second_finger); 
Serial.print("\t");



if(thumb >=470 ) 
{
 		 lcd.clear();
 lcd.setCursor(1,0); 
 lcd.print("I NEED WATER");
 delay(500);
  
  	}

else if(first_finger >=470 ) 
{
  		lcd.clear();
lcd.setCursor(1,0); 
lcd.print("I NEED FOOD");
delay(500); 
  
 	}

else if(second_finger >=470 ) 
{
 		 lcd.clear();
 lcd.setCursor(1,0); 
 lcd.print("RESTROOM");
 delay(500); 
}

else
{
     	lcd.clear();
lcd.setCursor(1,0);
   	     lcd.print("NOTHING");
		delay(500);
    
    }

}

