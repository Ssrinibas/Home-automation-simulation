#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
    
    //to config heater and cooler pin
    pinMode(HEATER ,OUTPUT);
    pinMode(COOLER,OUTPUT);
    //TO TURNR OF HEATER AND COOLER
    digitalWrite(HEATER,LOW);
    digitalWrite(COOLER,LOW);
     
}

float read_temperature(void)
{
  float temperature;
  //read the analog values and convert the voltage to temperature in degree celcius
  temperature=(((analogRead(A0)*(float)5/1024))/(float)0.01);
  return temperature;
 
   
}
//function to control the cooler means turn on and off
void cooler_control(bool control)
{
  if(control){
    digitalWrite(COOLER,HIGH);
  }else{
    digitalWrite(COOLER,LOW);

  }
   
}
void heater_control(bool control)
{
    if(control){
    digitalWrite(HEATER,HIGH);
  }else{
    digitalWrite(HEATER,LOW);

  }
   
    
}
