/*
=======================================================================================================================
Filename:       C05_Ex17.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.17 Múltiplos. Escreva uma função multiple que determine para um par de inteiros, se o segundo inteiro
                é um múltiplo do primeiro. A função deve apanhar dois argumentos inteiros e retornar 1 (verdadeiro),
                se o segundo for múltiplo do primeiro, e 0 (falso), caso contrário. Use essa função em um programa
                que inclua uma série de pares inteiros.
Date:           22/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int multiple( int x, int y );

int main( void )
{
    int num1, num2;

    printf( "Digite dois numeros inteiros (-1 para terminar):\n");
    scanf( "%d", &num1 );

    while( num1 != -1 ){
        scanf( "%d", &num2 );

        printf( "%d %s %d\n\n", num2, multiple( num1, num2 ) ? "E MULTIPLO DE" : "NAO E MULTIPLO DE", num1 );
    
        printf( "Digite dois numeros inteiros (-1 para terminar):\n");
        scanf( "%d", &num1 );
    }
    
    return 0;
}


int multiple( int x, int y )
{
    return y % x ? 0 : 1; 
}
