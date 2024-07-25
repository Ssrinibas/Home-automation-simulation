#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}
void brightness_control(void)
{
    //to read the values from ldr sensor connectted to a0 pin
 unsigned int ldr_val;
    ldr_val=analogRead(LDR_SENSOR);

    ldr_val=(1023-ldr_val)/4;
    analogWrite(GARDEN_LIGHT ,ldr_val);
    delay(100);
  
}
