/*
=======================================================================================================================
Filename:       C05_Ex10.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.10 Arredondando números. Uma das aplicações da função floor é arredondar um valor para o inteiro mais
                próximo. A instrução y = floor( x + .5 ); arredondará o número x para o inteiro mais próximo e
                atribuirá o resultado a y. Escreva um programa que leia vários números e use o comando anterior para
                arredondar cada um desses números para o inteiro mais próximo. Para cada número processado, imprima o
                número original e o número arredondado.
Date:           21/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <math.h>

#define SENTINELA -1

int main( void )
{
    double x;
    int y;

    printf( "Digite um numero real (-1 para terminar): " );
    scanf( "%lf", &x);

    while( x != SENTINELA ){
        y = floor( x );

        printf( "%.2f arrendondado com a funcao floor e: %d\n\n", x, y);

        printf( "Digite um numero real (-1 para terminar): " );
        scanf( "%lf", &x);
    }

    return 0; 
}
