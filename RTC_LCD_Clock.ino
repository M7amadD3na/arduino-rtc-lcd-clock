#include<Wire.h>
#include"RTClib.h"
#include <LiquidCrystal_I2C.h>
RTC_DS3231 rtc;
LiquidCrystal_I2C lcd(0x27,16,2);
void setup(){
Serial.begin(9600);//هذول لازم يكونو بهذا الترتيب
Wire.begin();
lcd.init();
lcd.backlight();

   rtc.begin(); //لازم تكون قبل الامر يلي تحته 
//rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));



lcd.clear();

}
void loop(){
DateTime now=rtc.now();
lcd.setCursor(0,0);
lcd.print("DATE:");
lcd.print(now.year(),DEC);
lcd.print("/");
lcd.print(now.month(),DEC);
lcd.print("/");
lcd.print(now.day(),DEC);
//Serial.print("("daysOTheWeek[now.]);

lcd.setCursor(0,1);
lcd.print("TIME:");
lcd.print(now.hour(),DEC);
lcd.print(":");
lcd.print(now.minute(),DEC);
lcd.print(":");

lcd.print(now.second(),DEC);







}