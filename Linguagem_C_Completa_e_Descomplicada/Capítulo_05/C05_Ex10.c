/*
=======================================================================================================================
Filename:       C05_Ex10.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                10 Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
Date:           12/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define N 10

int main( void )
{
    int numero, somatorio = 0;
    int contador;
    float media;

    for( contador = 0; contador < N; contador++ ){
        do{
            printf( "Digite 10 numeros inteiros (faltam %2d): ", N - contador );
            scanf( "%d", &numero );
        }while( numero < 0 );

        somatorio += numero;
    }

    media = somatorio / (float)N;

    printf( "Media = %.2f\n", media );
    
    return 0;
}
