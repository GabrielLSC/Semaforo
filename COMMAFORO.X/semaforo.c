#include <xc.h>
#include "semaforo.h"
#include "delay.h"

    #define VM_CAR PORTDbits.RD7
    #define AM_CAR PORTDbits.RD6
    #define VD_CAR PORTDbits.RD5
    #define VM_PED PORTDbits.RD3
    #define VD_PED PORTDbits.RD2
    #define BOTAO  PORTDbits.RD0

char BT (void)
{
    return (PORTDbits.RD0);
}

void semaforo_init (void)
{
  TRISDbits.TRISD0 = 1;
  TRISDbits.TRISD2 = 0;
  TRISDbits.TRISD3 = 0;
  TRISDbits.TRISD5 = 0;
  TRISDbits.TRISD6 = 0;
  TRISDbits.TRISD7 = 0;

  VM_CAR = 0;
  AM_CAR = 0;
  VD_CAR = 0;
  VM_PED = 0;
  VD_PED = 0;

 }
void semaforo_veiculos (void)
{
  VM_CAR = 0;
  AM_CAR = 0;
  VD_CAR = 1;
  VM_PED = 1;
  VD_PED = 0;
   
}
void semaforo_atencao (void)
{
  VM_CAR = 0;
  AM_CAR = 1;
  VD_CAR = 0;
  VM_PED = 1;
  VD_PED = 0;

}
void semaforo_pedestre (void)
{
  VM_CAR = 1;
  AM_CAR = 0;
  VD_CAR = 0;
  VM_PED = 0;
  VD_PED = 1;
}