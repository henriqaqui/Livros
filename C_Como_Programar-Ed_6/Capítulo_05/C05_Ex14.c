/*
=======================================================================================================================
Filename:       C05_Ex14.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.1 Para cada um dos conjuntos de inteiros a seguir, escreva uma única instrução que imprima um número
                aleatoriamente a partir do conjunto.
                    a) 2, 4, 6, 8, 10.
                    b) 3, 5, 7, 9, 11.
                    c) 6, 10, 14, 18, 22. 
Date:           06/10/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
    srand( time( NULL ) );
    
    printf( "a = { 2, 4, 6, 8, 10 }\nElemento sorteado: %d\n\n", ((rand() % 5)+1) * 2 );

    printf( "a = { 3, 5, 7, 9, 11 }\nElemento sorteado: %d\n\n", ( ( (rand() % 5)+1) *2 ) +1 );

    printf( "a = { 6, 10, 14, 18, 22 }\nElemento sorteado: %d\n\n", ( ( ( (rand() % 5)+1) *2 ) +1 ) *2 );

    return 0; 
}
