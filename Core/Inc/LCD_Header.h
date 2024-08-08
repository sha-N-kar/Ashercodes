#ifndef INC_LCD_HEADER_H_
#define INC_LCD_HEADER_H_

#include "main.h"
#include "adc.h"
//#include "i2c.h"
#include <string.h>


#define Button_Menu_Esc 	   HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_3)
#define Button_UP_Delete 	   HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_4)
#define Button_Down_Result 	   HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_5)
#define Button_Move            HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_6)
#define Button_Test_Enter      HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_7)

void Clear(void);
void LCD_Init(void);
void Glcd(char ,char );
void Number(float ,char );
void Conversition(short int );
void Mic_conversition(float ,int ,int ,float);

extern char name[];

#endif /* INC_LCD_HEADER_H_ */
