SemaphoreHandle_t semvar;

void setup(){
    if(semvar==NULL){
        semvar = xSemaphoreCreateBinary();
        if(semvar!=NULL){
            xSemaphoreGive(semvar);
        }
    }
    xTaskCreate(taskblink,"taskblink",10000,NULL,1,NULL);
    xTaskCreate(taskled,"taskled",10000,NULL,1,NULL);
    Serial.begin(9600);
}