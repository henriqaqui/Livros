/*
=======================================================================================================================
Filename:       ex02_05.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.5 Usando as instruções que você escreveu no Exercício 2.4,
                escreva um programa completo que calcule o produto de três números.
Date:           09/09/2020
=======================================================================================================================
*/

//Calcula o produto de três inteiros

#include <stdio.h>

int main( void ){
    int x, y, z, resultado;

    printf( "Digite o valor de tres numeros inteiros:\n" );

    scanf( "%d %d %d", &x, &y, &z );

    resultado = x * y * z;

    printf( "O produto e %d\n", resultado );

    return 0;
}
