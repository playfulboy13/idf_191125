#include "user_task.h"

uint8_t output_state=0x00;

void xuat_1_byte(uint8_t x)
{
    for(int i=0;i<8;i++)
    {
        (x&0x80)?(DS(1)):(DS(0));
        x<<=1;
        XUNG_DICH()
    }
    XUNG_CHOT()
}

void hc595_init_config(void)
{
    gpio_reset_pin(DS_PIN);
    gpio_set_direction(DS_PIN,GPIO_MODE_OUTPUT);
    gpio_set_level(DS_PIN,0);

    gpio_reset_pin(SH_CP_PIN);
    gpio_set_direction(SH_CP_PIN,GPIO_MODE_OUTPUT);
    gpio_set_level(SH_CP_PIN,0);

    gpio_reset_pin(ST_CP_PIN);
    gpio_set_direction(ST_CP_PIN,GPIO_MODE_OUTPUT);
    gpio_set_level(ST_CP_PIN,0);
}

void led1_on(void)
{
    output_state|=(1<<LED1_BIT);
    xuat_1_byte(output_state);
}

void led1_off(void)
{
    output_state&=~(1<<LED1_BIT);
    xuat_1_byte(output_state);
}

void Task1(void *pvParameters)
{
    hc595_init_config();

    while(1)
    {
        ESP_LOGI(TAG,"HELLO FROM ESP32!\r\n");

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void TaskLed(void *pvParameters)
{
    while(1)
    {
        led1_on();
        vTaskDelay(pdMS_TO_TICKS(1000));
        led1_off();
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
