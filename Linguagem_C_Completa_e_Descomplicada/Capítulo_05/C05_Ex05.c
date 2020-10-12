/*
=======================================================================================================================
Filename:       C05_Ex05.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                5 Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
Date:           12/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define LIMITE 50

int main( void )
{
    int numero, somatorio = 0;
    int contador = 0;

    for( numero = 0; contador < LIMITE; numero++ ){
        if( numero % 2 == 0 ){
            contador++;
            somatorio += numero;
            printf( "%2d: %2d\n", contador, numero );
        }
    }

    printf( "Somatorio = %d\n", somatorio );

    return 0;
}
