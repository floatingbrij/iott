#include <Wire.h>
#define ledpin 2
void setup()
{
    Serial.begin(9600);
    Wire.begin(0x8);
    Wire.onRecieve(yes);
}
void yes(int n)
{   
    while (Wire.available())
    {
        char c = Wire.read();
        Serial.println("%c \n", c);
    }
}
void loop(){
    delay(100)
}
