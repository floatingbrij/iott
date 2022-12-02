#define ir 13
#define led 2

void setup()
{
    Serial.begin();
    pinMode(ir, INPUT);
    pinMode(led, OUTPUT);
}

void loop()
{
    int n  = digitalRead(ir);
    if(ir==0){
        digitalWrite(led,HIGH);
        Serial.println("Motion detected");
    }
    else{
        digitalWrite(led,LOW);
        Serial.println("NO motion");
    }
}