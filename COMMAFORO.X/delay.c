#include <xc.h>
#include "delay.h"
#include "semaforo.h"



int i;

void delay (unsigned int t)
{
    while( t )
    { 
     __delay_ms(1);
     --t;
    }
}

char delay_break ( unsigned int t , unsigned char bt)
{
    for( i = 0; i < t ; i++)
    {
        delay(1);
        if(BT())
        {
            return(BT());
           break;
        }
    } 
}