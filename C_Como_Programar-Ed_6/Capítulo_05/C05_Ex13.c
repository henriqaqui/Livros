/*
=======================================================================================================================
Filename:       C05_Ex13.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.13 Escreva instruções que atribuam inteiros aleatórios à variável n nos seguintes intervalos:
                    a) 1 ≤ n ≤ 2
                    b) 1 ≤ n ≤ 100
                    c) 0 ≤ n ≤ 9
                    d) 1000 ≤ n ≤ 1112
                    e) –1 ≤ n ≤ 1
                    f) –3 ≤ n ≤ 11 
Date:           06/10/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
    int n;

    srand( time( NULL ) );

    n = ( rand() % 2 ) + 1;
    printf( "a) 1 <= n <= 2\nNumero sorteado: %d\n\n", n );

    n = ( rand() % 100 ) + 1;
    printf( "b) 1 <= n <= 100\nNumero sorteado: %d\n\n", n );

    n = ( rand() % 10 );
    printf( "c) 0 <= n <= 9\nNumero sorteado: %d\n\n", n );

    n = ( rand() % 113 ) + 1000;
    printf( "d) 1000 <= n <= 1112\nNumero sorteado: %d\n\n", n );

    n = ( rand() % 3 ) - 1;
    printf( "e) -1 <= n <= 1\nNumero sorteado: %d\n\n", n );

    n = ( rand() % 15 ) - 3;
    printf( "f) -3 <= n <= 11\nNumero sorteado: %d\n\n", n );

    return 0; 
}
