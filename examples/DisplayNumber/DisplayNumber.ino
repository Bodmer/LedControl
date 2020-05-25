//We always have to include the library
#include "LedControl.h"

/*
  Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
  pin 12 is connected to the DataIn
  pin 11 is connected to the CLK
  pin 10 is connected to LOAD
  We have only a single MAX72XX.
*/
LedControl lc=LedControl(12,11,10,1);


void setup() {
  /*
    The MAX72XX is in power-saving mode on startup,
    we have to do a wakeup call
  */
  lc.shutdown(0, false);
  /* Set the brightness */
  lc.setIntensity(0, 2);
  /* and clear the display */
  lc.clearDisplay(0);
}

void loop() {
  lc.showNumber(0, 1);
  delay(500);
  lc.showNumber(0, 12);
  delay(500);
  lc.showNumber(0, 123);
  delay(500);
  lc.showNumber(0, 1234);
  delay(500);
  lc.showNumber(0, 12345);
  delay(500);
  lc.showNumber(0, 123456);
  delay(500);
  lc.showNumber(0, 1234567);
  delay(500);
  lc.showNumber(0, 12345678);
  delay(500);
  uint32_t n = 0;
  while (1) lc.showNumber(0, n++);
}
