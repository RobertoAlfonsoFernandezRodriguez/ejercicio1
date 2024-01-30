/*
 * File:   main.c
 * Author: Roberto Fernandez
 *
 * Created on 30 de enero de 2024, 12:08 PM
 */


#include <xc.h>
#include "confi.h"
#define _XTAL_FREQ 20000000 

void main(void) {
    ADCON1 = 0x0F; // Todos bits son digitales.
   
    TRISB= 0; // 0 -> OUTPUT , 1 -> INPUT
    while(1){
        LATBbits.LB0 = 1;  // Enciende
        __delay_ms(200);
        LATBbits.LB1 = 1;
        __delay_ms(200);
        LATBbits.LB2 = 1;  // Enciende
        __delay_ms(200);
        LATBbits.LB3 = 1;
        __delay_ms(200);
        LATBbits.LB4 = 1;  // Enciende
        __delay_ms(200);
        LATBbits.LB5 = 1;
        __delay_ms(200);
        LATBbits.LB6 = 1;  // Enciende
        __delay_ms(200);
        LATBbits.LB7 = 1;
        __delay_ms(200);
        LATBbits.LB0 = 0;   // APAGA A0
        __delay_ms(200);
        LATBbits.LB1 = 0;
        __delay_ms(200);
        LATBbits.LB2 = 0;  // Enciende
        __delay_ms(200);
        LATBbits.LB3 = 0;
        __delay_ms(200);
        LATBbits.LB4 = 0;  // Enciende
        __delay_ms(200);
        LATBbits.LB5 = 0;
        __delay_ms(200);
        LATBbits.LB6 = 0;  // Enciende
        __delay_ms(200);
        LATBbits.LB7 = 0;
        __delay_ms(200);
        
    }
   
    return;
}
