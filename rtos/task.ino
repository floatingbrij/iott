TaskHandle_t xhandle1,xhandle2;
void setup(){
    Serial.begin(9600);
    xTaskCreate(taskone,"taskone",10000,NULL,1,&xhandle1);
}
void loop(){
    delay(100);
}

void taskone(int *parms){
    int i = 0;
    while(i<4){
        if(i==2){
            xTaskCreate(tasktwo,"tasktwo",10000,NULL,2,&xhandle2);
        }
        Serial.println("Task 1: %d\n",i);
        i++;
    }
    vTaskDelete(NULL);
}
void tasktwo(int *parms){
    int i=0;
    for(i<4){
        Serial.println("Task 2: %d\n",i);
        i++;
        delay(2000);
    }
    vTaskDelete(NULL);
}