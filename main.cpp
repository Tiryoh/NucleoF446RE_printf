
#include "mbed.h"

int main() 
{
    Serial pc(SERIAL_TX,SERIAL_RX);
    //Serial pc(PC_10,PC_11);
    
    pc.printf("\r\n");
    wait(0.1);
    pc.baud(115200);
    pc.printf("baud 115200\r\n");
    pc.printf("System Clock = %d\r\n", HAL_RCC_GetSysClockFreq());
    pc.printf("HCLK Clock = %d\r\n", HAL_RCC_GetHCLKFreq());
    pc.printf("PCLK1 Clock = %d\r\n", HAL_RCC_GetPCLK1Freq());
    pc.printf("PCLK2 Clock = %d\r\n", HAL_RCC_GetPCLK2Freq());
    pc.printf("\r\n");
    
    pc.printf("\r\n");
    wait(0.1);    
    pc.baud(9600);
    pc.printf("baud 9600\r\n");
    pc.printf("System Clock = %d\r\n", HAL_RCC_GetSysClockFreq());
    pc.printf("HCLK Clock = %d\r\n", HAL_RCC_GetHCLKFreq());
    pc.printf("PCLK1 Clock = %d\r\n", HAL_RCC_GetPCLK1Freq());
    pc.printf("PCLK2 Clock = %d\r\n", HAL_RCC_GetPCLK2Freq());
    pc.printf("\r\n");
    
    while(1)     {    }
}

