#ifndef CONFIG_H
#define  CONFIG_H

#pragma config FOSC = INTRC_NOCLKOUT    // Fonte do rel�gio: oscilador interno
#pragma config WDTE = OFF               // Temporizador desabilitado do WatchDog
#pragma config MCLRE = OFF               // Desab. Master Clear via pino
#pragma config LVP = OFF               // Desab. grava��o em baixa tens�o

#define  _XTAL_FREQ      4000000           // Freq. rel�gio interno: 4MHz (padr�o)

#endif
