/*
=======================================================================================================================
Filename:       C05_Ex01.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                1 Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N
                em ordem crescente.
Date:           05/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int numero, contador = 0;

    scanf( "%d", &numero );

    while( contador <= numero ){
        printf( "%d\t", contador );
        if( contador % 10 == 0 ){
            printf( "\n" );
        }
        contador++;
    }

    return 0;
}
