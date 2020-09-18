/*
=======================================================================================================================
Filename:       C04_Ex12.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                4.12 Calculando a soma de inteiros pares. Escreva um programa que calcule a imprima a soma dos
                inteiros pares de 2 a 30.
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    const int LIMITE_PAR = 30;
    int numeroPar = 2, somaPares = 0;

    do{
        somaPares += numeroPar;
        numeroPar += 2;
    }while( numeroPar <= LIMITE_PAR );

    printf( "%d\n", somaPares);

    return 0; 
}
