/*
 * File:   leds.c
 * Author: 19180037
 *
 * Created on 13 de Março de 2020, 08:45
 */


#include <xc.h>

void initLEDS( void )
{
    PORTDbits.RD0 = 0;
    TRISDbits.TRISD0 = 0;
    PORTDbits.RD1 = 0;
    TRISDbits.TRISD1 = 0;
}

void ligarLED1( void )
{
    PORTDbits.RD0 = 1;
}

void ligarLED2( void )
{
    PORTDbits.RD1 = 1;
}

void desligarLED1( void )
{
    PORTDbits.RD0 = 0;
}

void desligarLED2( void )
{
    PORTDbits.RD1 = 0;
}

unsigned char lerLED1( void )
{
    return( PORTDbits.RD0 );
}

unsigned char lerLED2( void )
{
    return( PORTDbits.RD1 );
}