/*
=======================================================================================================================
Filename:       C05_Ex09.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                9 Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
Date:           12/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define N 10

int main( void )
{
    int numero, maior, menor;
    int contador;
    
    printf( "Digite 10 numeros inteiros (faltam %2d): ", N - contador );
    scanf( "%d", &numero );

    maior = menor = numero;

    for( contador = 1; contador < N; contador++ ){
        printf( "Digite 10 numeros inteiros (faltam %2d): ", N - contador );
        scanf( "%d", &numero );
        
        if( numero < menor ){
            menor = numero;
        }
        if( numero > maior ){
            maior = numero;
        }
    }

    printf( "Menor = %d\nMaior = %d\n", menor, maior );
    
    return 0;
}
