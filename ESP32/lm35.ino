#define lm 35
#define adcvref 4096
#define adcv 3300
void setup(){
    Serial.begin(9600);
}

void loop(){
    int v = analogRead(lm);
    int mv = (v)*adcv/adcvref;
    int tempc = mv/10;
    Serial.println(tempc);
}

