/*
=======================================================================================================================
Filename:       C04_Ex13.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                4.13 Calculando o produto de inteiros ímpares. Escreva um programa que calcule a imprima o produto
                dos inteiros ípares de 1 a 15.
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    const int LIMITE_IMPAR = 15;
    int numeroImpar = 1, produtoImpar = 1;

    do{
        produtoImpar *= numeroImpar;
        numeroImpar += 2;
    }while( numeroImpar <= LIMITE_IMPAR );

    printf( "%d\n", produtoImpar);

    return 0; 
}
