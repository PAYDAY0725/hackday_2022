/*********************************
Hanasikakete-ne Display
----------------------------------
PAYDAY 2022
*********************************/

#include <M5Stack.h>


void setup() {
  // init
  M5.begin();
  M5.Power.begin();
  
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.setTextColor(TFT_WHITE);
}


void loop() {
  // for test
  if(M5.BtnA.read())
    inactive();
  else if(M5.BtnB.read())
    active();

}

// can talk
void inactive() {
    M5.Lcd.fillScreen(TFT_BLUE);
    M5.Lcd.drawCentreString("talk w/ me!",160,130,4);
  }

// cannot talk
void active() {
    M5.Lcd.fillScreen(TFT_RED);
    M5.Lcd.drawCentreString("Don't talk to me!",160,130,4);
}
