/*
=======================================================================================================================
Filename:       C03_Ex03.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                3 Faça um programa que leia três valores inteiros e mostre sua soma.
Date:           15/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int num1, num2, num3;

    scanf( "%d %d %d", &num1, &num2, &num3 );

    printf( "%d\n", num1 + num2 + num3 );

    return 0;
}
