/*
=======================================================================================================================
Filename:       C03_Ex08.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                8 Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus
                Fahrenheit. A fórmula de conversão é F = C * (9.0/5.0) + 32, sendo F a temperatura em Fahrenheit e
                C a temperatura em Celsius.
Date:           12/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    float fahrenheit, celsius;

    scanf( "%f", &celsius );

    fahrenheit = celsius * ( 9.0 / 5.0 ) + 32;

    printf( "%.1fF\n", fahrenheit );

    return 0;
}
