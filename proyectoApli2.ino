#include "SevSeg.h"
SevSeg dispTiempo, dispLocal;  //Instantiate a seven segment object

unsigned long startMillis;  //some global variables available anywhere in the program
unsigned long currentMillis;
const unsigned long period = 1000;  //the value is a number of milliseconds

int seconds;

void setup() {

  byte segmentPins[] = { 12, 14, 27, 26, 25, 33, 32 };
  byte hardwareConfig = N_TRANSISTORS ;  // See README.md for options
  bool resistorsOnSegments = false;      // 'false' means resistors are on digit pins
  bool updateWithDelays = false;         // Default 'false' is Recommended
  bool leadingZeros = true;             // Use 'true' if you'd like to keep the leading zeros
  bool disableDecPoint = true;           // Use 'true' if your decimal point doesn't exist or isn't connected. Then, you only need to specify 7 segmentPins[]



  byte numDigits1 = 4;
  byte digitPins1[] = { 19, 21, 22, 23 };
  dispTiempo.begin(hardwareConfig, numDigits1, digitPins1, segmentPins, resistorsOnSegments, updateWithDelays, leadingZeros, disableDecPoint);

  startMillis = millis();  //initial start time



}

void loop() {

  dispLocal.setNumber(seconds, 0);
  contadorTiempo();
  dispTiempo.refreshDisplay();  // Must run repeatedly
  dispLocal.refreshDisplay();

}

void contadorTiempo(){

  currentMillis = millis();  //get the current "time" (actually the number of milliseconds since the program started)

  if (currentMillis - startMillis >= period){  //test whether the period has elapsed 

    seconds++;                        
    dispTiempo.setNumber(seconds, 0);
    startMillis = currentMillis; 

  }

  if (segundos > 59 ){

    

  }

}
