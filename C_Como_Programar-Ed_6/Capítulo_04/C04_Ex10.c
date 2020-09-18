/*
=======================================================================================================================
Filename:       C04_Ex010.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                4.10 Média de uma sequência de inteiros. Escreva um programa que calcule e imprima a média de vários
                inteiros. Considere que o último valor lido com scanf seja a sentinela 9999. Uma sequência de entrada
                típica poderia ser 10 8 11 7 9 9999, indicando que é preciso calcular a média de todos os valores
                anteriores a 9999.
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{   
    const int SENTINELA = 9999;

    int numero, somatorio = 0;
    int contador = 0;
    float media;

    scanf( "%d", &numero );

    while ( numero != SENTINELA ){
        somatorio += numero;
        contador++;
        
        scanf( "%d", &numero );
    }

    media = (float)somatorio / contador;
    
    printf( "%.2f\n", media );
    
    return 0; 
}
