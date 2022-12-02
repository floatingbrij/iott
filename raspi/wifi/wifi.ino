#include<WiFi.h>
#include<HTTPClient.h>
const char *ssid = "brij";
const char *pass = "12345678";

void setup(){
    Serial.begin(9600);
    WiFi.begin(ssid,pass);
    while(WiFi.status()!=WL_CONNECTED){
        Serial.print(".");
        delay(1000);
    }
    Serial.println("\nConnected!");
}
void loop(){
    HTTPClient http;
    if(WiFi.status()== WL_CONNECTED){
        http.begin("");
        int httpcode = http.GET();
        if(httpcode>0){
            String payload = http.getString();
            Serial.print(httpcode);
            Serial.println(payload);
        }
        else{
            println("something is wrong")
        }
    }
    else{
        delay(1000);
    }
    http.end();
}