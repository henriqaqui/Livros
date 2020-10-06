/*
=======================================================================================================================
Filename:       C05_Ex04.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                4 Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números
                maiores que 0.
Date:           06/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define LIMITE 5
#define MULTIPLO 3

int main( void )
{
    int numero = MULTIPLO;
    int contador;

    for( contador = 1; contador <= LIMITE; contador++ ){
        numero += MULTIPLO;
        printf( "%d\n", numero );
    }

    return 0;
}
