/*
=======================================================================================================================
Filename:       C07_Ex01.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                1 Faça um programa que leia uma string e a imprima na tela.
Date:           06/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    char nome[30];

    scanf( "%s", nome );
    printf( "%s\n", nome );

    return 0;
}
