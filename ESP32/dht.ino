#include "DHT.h"
#define dhttpye 22,11,21
#define dhtpin 4,5

DHT dht(dhtpin,dhttype);
void setup(){
    Serial.begin(9600);
    dht.begin();
}

void loop(){
    delay(2000);
    int humidity = dht.readHumidity();
    int tempc = dht.readTemperature();
    int tempf = dht.readTemperature(true);
    int htc = dht.computeHeatIndex(tempc,humidity,false);
    int htf = dht.computeHeatIndex(tempf,humidity,true);
}