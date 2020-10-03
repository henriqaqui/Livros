/*
=======================================================================================================================
Filename:       C03_Ex06.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                6 Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).
                A fórmula de conversão é M = K/3,6, sendo K a velocidade em km/h e M em m/s.
Date:           03/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    float kmHora, mSegundo;

    scanf( "%f", &kmHora );

    mSegundo = kmHora / 3.6;

    printf( "%.2f\n", mSegundo );

    return 0;
}
