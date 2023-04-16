#include "LCDScreen.h"
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

LCDScreen::LCDScreen()
{
    lcd.init();
    lcd.backlight();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("hello");
}

LCDScreen::~LCDScreen()
{

}

void LCDScreen::Initialize(){
    /*lcd.init();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("hello");*/
}

void LCDScreen::Write(const char* message){
    lcd.print(message);
}

void LCDScreen::Clear(){
    lcd.clear();
}