/*
=======================================================================================================================
Filename:       C05_Ex03.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                3 Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais
                ímpares.
Date:           06/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int numero, contador;

    scanf( "%d", &numero );

    for( contador = 0; contador <= numero; contador++ ){
        if( contador % 2 ){
            printf( "%d\n", contador );
        }
    }

    return 0;
}
