#define potato 35
#define led 34

void setup(){
    ledcAttachPin(led,2);
    ledcSetup(2,1000,12);
}
void loop(){
    int a = analogRead(potato);
    int b = map(a,0,4096,0,255);
    ledcWrite(2,b);
}