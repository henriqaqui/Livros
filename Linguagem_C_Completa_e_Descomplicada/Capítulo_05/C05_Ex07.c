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

    for( contador = 0; contador < N; contador++ ){
        printf( "Digite 10 numeros inteiros (faltam %2d): ", N - contador );
        scanf( "%d", &valor );
        somatorio += valor;
    }

    printf( "Somatorio = %d\n", somatorio );
    
    return 0;
}
