/*
=======================================================================================================================
Filename:       C05_Ex01.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                1 Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de N até 0
                em ordem decrescente.
Date:           05/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int numero, contador;

    scanf( "%d", &numero );

    for( contador = numero; contador >= 0; contador-- ){
        printf( "%d\n", contador );
    }

    return 0;
}
