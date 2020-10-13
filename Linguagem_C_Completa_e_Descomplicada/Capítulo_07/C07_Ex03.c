/*
=======================================================================================================================
Filename:       C07_Ex03.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                3 Sem usar a função strlen(), faça um programa que leia uma string e imprima
                quantos caracteres ela tem.
Date:           13/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define TAMANHO 50

int main( void )
{
    char nome[TAMANHO];
    int i = 0;

    scanf( "%s", nome );

    while( nome[i] != '\0' ){
        i++;
    }

    printf( "%d\n", i );
    
    return 0;
}
