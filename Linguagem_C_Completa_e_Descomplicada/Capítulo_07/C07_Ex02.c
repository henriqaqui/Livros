/*
=======================================================================================================================
Filename:       C07_Ex02.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                2 Faça um program que leia uma string e imprima as quatro primeiras letras dela.
Date:           06/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define LIMITE 4

int main( void )
{
    char nome[30];
    int i;

    scanf( "%s", nome );

    for ( i = 0; i < LIMITE; i++ ){
        printf( "%c", nome[i] );
    }

    printf( "\n" );
    
    return 0;
}
