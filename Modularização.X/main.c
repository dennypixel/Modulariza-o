/*
 * File:   main.c
 * Author: 19180037
 *
 * Created on 13 de Março de 2020, 08:38
 */


#include <xc.h>
#include "config.h"
#include "chaves.h"
#include "Leds.h"

void main(void) 
{
    initLEDS();
    initCHS();

   
    while( 1 )
    {
        if( lerCH1() == 1 )
        {
            ligarLED1();
            __delay_ms(500);
        }
        else
        {
            desligarLED1();
            __delay_ms(500);
        }
        
        if( lerCH2() == 1)
        {
            ligarLED2();
            __delay_ms(500);
        }
        else
        {
            desligarLED2();
            __delay_ms(500);
        }
            
    }
    return;
}
