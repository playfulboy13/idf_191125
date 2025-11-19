#ifndef _USER_TASK_H
#define _USER_TASK_H

#include "main.h"

#define DS_PIN 25
#define SH_CP_PIN 26
#define ST_CP_PIN 27

#define DS(x) gpio_set_level(DS_PIN,(x)?(1):(0))
#define SH_CP(x) gpio_set_level(SH_CP_PIN,(x)?(1):(0))
#define ST_CP(x) gpio_set_level(ST_CP_PIN,(x)?(1):(0))

#define XUNG_DICH() {SH_CP(1);SH_CP(0);}
#define XUNG_CHOT() {ST_CP(1);ST_CP(0);}

#define RL1_BIT 0
#define RL2_BIT 1
#define LED1_BIT 2
#define LED2_BIT 3
#define BUZZER_BIT 4


extern uint8_t output_state;

void hc595_init_config(void);
void xuat_1_byte(uint8_t x);
void led1_on(void);
void led1_off(void);

void Task1(void *pvParameters);
void TaskLed(void *pvParameters);

#endif