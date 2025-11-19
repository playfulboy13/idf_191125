#include "main.h"

const char* TAG="ESP32_NBN";

void app_main(void)
{
    xTaskCreate(Task1,"Task1",4096,NULL,5,NULL);
    xTaskCreate(TaskLed,"TaskLed",4096,NULL,5,NULL);
}