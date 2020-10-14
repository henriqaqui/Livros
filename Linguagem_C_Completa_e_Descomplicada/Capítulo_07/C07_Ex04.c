/*
=======================================================================================================================
Filename:       C07_Ex04.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                4 Faça um programa que leia uma string e imprima de trás para a frente.
Date:           14/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define TAMANHO 50

int main( void )
{
    char palavra[TAMANHO];
    int i = 0;

    scanf( "%s", palavra );

    while( palavra[i] != '\0' ){
        i++;
    }

    i--;

    while( i >= 0 ){
        printf( "%c", palavra[i] );
        --i;
    }
    return 0;
}
