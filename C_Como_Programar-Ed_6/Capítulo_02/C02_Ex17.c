/*
=======================================================================================================================
Filename:       C02_Ex17.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.17 Imprimindo valores com printf. Escreva um programa que imprima os números de 1 a 4 na mesma linha.
                Escreva o programa utilizando os métodos a seguir.
                    a) Uma instrução printf sem especificadores de conversão.
                    b) Uma instrução printf com quatro especificadores de conversão.
                    c) Quatro instruções printf.
Date:           09/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int um = 1, dois = 2, tres = 3, quatro = 4;

    printf( "1 2 3 4\n" );

    printf( "%d %d %d %d\n", um, dois, tres, quatro );
    
    printf( "1 " );
    printf( "2 " );
    printf( "3 " );
    printf( "4\n" );
    
    return 0;
}
