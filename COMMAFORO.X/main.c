#include <xc.h>
#include "config.h"
#include "delay.h"
#include "semaforo.h"

void main (void)
{
    semaforo_init ();
    
    while (1)
    {
        
        semaforo_veiculos();
        delay_break(7000, BT());
        
        if(BT())
        {
            
            semaforo_veiculos();
            delay(3000);
            
            semaforo_atencao();
            delay(2000);
            
            semaforo_pedestre();
            delay(7000);
                     
            semaforo_veiculos();
            delay_break(7000, BT());
        }
        
        delay(3000);
     
        semaforo_atencao();
        delay(2000);
        
        semaforo_pedestre();
        delay(7000);
  
        semaforo_veiculos();
        
    }
    
}


