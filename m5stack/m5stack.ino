/*********************************
Hanasikakete-ne Display
----------------------------------
PAYDAY 2022
*********************************/

#include <M5Stack.h>

uint32_t pin36_stat = 0;
uint32_t pre_pinstat = 1;
  
void setup() {
  // init
  M5.begin();
  M5.Power.begin();
  
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.setTextColor(TFT_WHITE);

  pinMode(36,INPUT);
}


void loop() {
  /*// for test
  if(M5.BtnA.read())
    inactive();
  else if(M5.BtnB.read())
    active();
  */

  // receive from raspberry pi
  pin36_stat = digitalRead(36);

  if(pin36_stat != pre_pinstat){
    if(pin36_stat)
      active();
    else
      inactive();
  }
  
  pre_pinstat = pin36_stat;
  delay(10);
}

// can talk
void inactive() {
    M5.Lcd.fillScreen(TFT_BLUE);
    delay(10);
    M5.Lcd.drawCentreString("talk w/ me!",160,130,4);
  }

// cannot talk
void active() {
    M5.Lcd.fillScreen(TFT_RED);
    delay(10);
    M5.Lcd.drawCentreString("Don't talk to me!",160,130,4);
}
