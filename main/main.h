#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/queue.h"
#include "freertos/timers.h"
#include "freertos/event_groups.h"

#include "esp_log.h"
#include "esp_system.h"
#include "driver/gpio.h"
#include "driver/i2c_master.h"
#include "esp_wifi.h"
#include "mqtt_client.h"


#include "user_task.h"


extern const char* TAG;




#endif