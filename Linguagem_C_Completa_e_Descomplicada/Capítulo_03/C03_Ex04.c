/*
=======================================================================================================================
Filename:       C03_Ex04.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                4 Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
Date:           15/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    float num1, num2, num3, num4, media;

    scanf( "%f %f %f %f", &num1, &num2, &num3, &num4 );

    media = (num1 + num2 + num3 + num4) / 4;

    printf( "%f\n", media );

    return 0;
}
