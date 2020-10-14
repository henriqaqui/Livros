/*
=======================================================================================================================
Filename:       C07_Ex05.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                5 Faça um programa que leia uma string e a inverta. A string invertifa deve ser armazenada na mesma
                variável. Em seguida, imprima a string invertida.
Date:           14/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define TAMANHO 50

int main( void )
{
    char palavra[TAMANHO], troca[TAMANHO];
    int i = 0, j;

    fgets( palavra, TAMANHO, stdin );

    while( palavra[i] != '\0' ){
        troca[i] = palavra[i];
        troca[i+1] = '\0';
        i++;
    }

    j = --i;

    while( i >= 0 ){
        palavra[j - i] = troca[i];
        --i;
    }

    printf( "%s\n", palavra );

    return 0;

}
