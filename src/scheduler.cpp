// --- definierar NÄR resp. funktion ska köras ---
#include <stdio.h>
#include "sensors.h"

struct Task{ // Vad, Hur ofta och När senast
    // callback till function .. 
    uint32_t intervall;
    uint32_t lastRun;
};
Task task;


void taskScheduler(){

  // läs kritiska sensorer (Prio 1) - löpande

  // checkSensors(prio2);
  // läs hög-prio sensorer (Prio 2) var 1:e sek? * 2.

  readPrio3SensorsAsync(); // läs (Prio 3) sensorer -> var 2:e sek? * 2.

   // checkAlarmTrigger();
  // om larm triggats - skicka till ESP (via BLE)

  
  //if "mer än 2sek sen || DHT11_isBusy?" ... readPrio3SensorsAsync(); 

  // skicka till broker - var 5 sek?

  // håll wifi & BLE igång

};