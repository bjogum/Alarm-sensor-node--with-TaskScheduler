#include <Arduino.h>
#include "tasks.h"

bool timeToScanPrio3 = false;


void setup() {


}

void loop() {

  // läs kritiska sensorer (Prio 1) - löpande

  // lös hög-prio sensorer (Prio 2) var 1:e sek? * 2.
  
  // om larm triggats - skicka till ESP (via BLE)

  // läs övriga sensorer (Prio 3) var 2:e sek? * 2.
  //if "mer än 2sek sen || DHT11_isBusy?" ... readPrio3SensorsAsync(); 

  // skicka till broker - var 5 sek?

  // håll igång wifi

}