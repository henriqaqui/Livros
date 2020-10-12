/*
=======================================================================================================================
Filename:       C03_Ex07.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                7 Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor
                correspondente em dólares.
Date:           12/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    float valorReais, cotaDolar;
    float converte;

    scanf( "%f%f", &valorReais, &cotaDolar );

    converte = valorReais / cotaDolar;

    printf( "R$%.2f equivale a $%.2f\n", valorReais, converte );

    return 0;
}
