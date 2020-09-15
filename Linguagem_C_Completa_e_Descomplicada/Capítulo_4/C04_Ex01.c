/*
=======================================================================================================================
Filename:       C04_Ex01.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                1 Faça um programa que leia dois números e mostre qual deles é o maior.
Date:           15/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int num1, num2;

    scanf( "%d %d", &num1, &num2 );

    if( num1 > num2 ){
        printf( "%d\n", num1 );
    }
    else{
        printf( "%d\n", num2 );
    }

    return 0;
}
