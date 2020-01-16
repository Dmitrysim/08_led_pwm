#include "MDR32Fx.h"
#include "core_cm3.h"
#include "MDR32F9Qx_config.h"
#include "system_MDR32F9Qx.h"
#include "MDR32F9Qx_rst_clk.h"
#include "MDR32F9Qx_port.h"
#include "MDR32F9Qx_timer.h"
#include "stdlib.h"
#include "stdio.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

#define delay(); for (int i=0;i<10000;i++)
#define PERIOD 1000

uint16_t VAL1 = 1000;
uint16_t VAL2 = 1000;
int state_down = 0;     // Флаг статуса down
int state_up = 0;       // Флаг статуса up

void vTaskUp (void *argument);
void vTaskDown (void *argument);

void pins_init(void);
void timer_init(void);
void button_pins(void); //настройка кнопок

