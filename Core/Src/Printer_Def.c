#include "printer_Header.h"

void Heading(char Text)
{
    char Heading_Font[]={0x1D,0x21,Text};
    HAL_UART_Transmit(&huart1,(uint8_t*) Heading_Font,sizeof(Heading_Font), 100);
}

void string(char *Print_Data)
{
	HAL_UART_Transmit(&huart1,Print_Data, strlen(Print_Data), 100);
}


