/*
 * File:   chaves.c
 * Author: 19180037
 *
 * Created on 13 de Março de 2020, 08:45
 */


#include <xc.h>

void initCHS( void )
{
    TRISDbits.TRISD2 = 1; 
    TRISDbits.TRISD3 = 1;
}

unsigned char lerCH1( void )
{
    return( PORTDbits.RD2 );
}
unsigned char lerCH2( void )
{
    return( PORTDbits.RD3 );
}
