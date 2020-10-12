/*
=======================================================================================================================
Filename:       C05_Ex07.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                7 Elabore um programa que peça ao usuário para digitar 10 valores. Some esse valores e apresente
                o resultado na tela.
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
