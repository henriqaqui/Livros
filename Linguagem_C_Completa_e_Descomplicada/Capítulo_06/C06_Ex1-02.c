/*
=======================================================================================================================
Filename:       C06_Ex1-02.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                2 Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores
                lidos na ordem invertida.
Date:           06/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define TAMANHO 6

int main( void )
{
    int numero[ TAMANHO ];
    int i;

    for( i = 0; i < TAMANHO; i++ ){
        scanf( "%d", &numero[i] );
    }

    for( i = TAMANHO - 1; i >= 0; i-- ){
        printf( "%d\n", numero[i] );
    }    

    return 0;
}
