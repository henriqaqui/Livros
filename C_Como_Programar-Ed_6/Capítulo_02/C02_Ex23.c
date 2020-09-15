/*
=======================================================================================================================
Filename:       C02_Ex23.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.23 Maiores e menores inteiros. Escreva um programa que leia cinco inteiros e depois determine e
                imprima o maior e o menor inteiro no grupo. Use apenas as técnicas de programação que você aprendeu
                neste capítulo.
Date:           10/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int num1, num2, num3, num4, num5;
    int maior, menor;

    printf( "Entre com cinco numeros inteiros:\n" );
    scanf( "%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5 );

    maior = num1;
    menor = num1;

    if( num2 > maior ){
        maior = num2;
    }

    if( num3 > maior ){
        maior = num3;
    }

    if( num4 > maior ){
        maior = num4;
    }

    if( num5 > maior ){
        maior = num5;
    }

    if( num2 < menor ){
        menor = num2;
    }

    if( num3 < menor ){
        menor = num3;
    }

    if( num4 < menor ){
        menor = num4;
    }

    if( num5 < menor ){
        menor = num5;
    }

    printf( "O maior e %d\nO menor e %d", maior, menor );

    return 0;
}
