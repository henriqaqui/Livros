/*
=======================================================================================================================
Filename:       C05_Ex18.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.18 Par ou ímpar. Escreva um programa que inclua uma série de inteiros e os passe um de cada vez à
                função even, que usa o operador de módulo para determinar se um inteiro é par. A função deverá usar um
                argumento inteiro e retornar 1 se o inteiro for par, e retornar 0 se o inteiro for ímpar. 
Date:           22/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int even( int );

int main( void )
{
    int numero;

    printf( "Digite um numero inteiro (-1 para terminar):\n");
    scanf( "%d", &numero );

    while( numero != -1 ){
        printf( "%s\n\n", even( numero ) ? "PAR" : "IMPAR" );
    
        printf( "Digite um numero inteiro (-1 para terminar):\n");
        scanf( "%d", &numero );
    }
    
    return 0;
}


int even( int x )
{
    return x % 2 ? 0 : 1; 
}
