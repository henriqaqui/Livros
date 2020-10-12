/*
=======================================================================================================================
Filename:       C05_Ex08.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                8 Faça um programa que leia 10 inteiros e imprima sua média.
Date:           12/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define N 10

int main( void )
{
    int valor, somatorio = 0;
    int contador;
    float media;

    for( contador = 0; contador < N; contador++ ){
        scanf( "%d", &valor );
        somatorio += valor;
    }

    media = somatorio / (float)N;

    printf( "%.2f\n", media );
    
    return 0;
}
