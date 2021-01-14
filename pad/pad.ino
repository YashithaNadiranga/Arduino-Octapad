#include "SD.h"
#define SD_ChipSelectPin 10
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

void setup()
{

tmrpcm.speakerPin=9;
Serial.begin(9600);
if(!SD.begin(SD_ChipSelectPin))
{
  Serial.println("SD fail");
  return;
}
}

void loop() {

  
int val= analogRead(A0);
 int val1= analogRead(A1);

  // put your main code here, to run repeatedly:
if(val>=100){

tmrpcm.setVolume(5);
tmrpcm.play("e.wav");
}

if(val1>=100){

tmrpcm.setVolume(5);
tmrpcm.play("s.wav");
}

delay(50);
}
