/*
=======================================================================================================================
Filename:       C03_Ex02.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                2 Faça um programa que leia um número real e imprima a quinta parte desse número.
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    float numero;

    scanf( "%f", &numero );

    printf( "%f\n", numero * .2 );

    return 0;
}
