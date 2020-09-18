/*
=======================================================================================================================
Filename:       C04_Ex03.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                3 Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int numero;

    scanf( "%d", &numero );

    if( numero % 2 ){
        printf( "IMPAR\n" );
    }
    else{
        printf( "PAR\n");
    }

    return 0;
}
