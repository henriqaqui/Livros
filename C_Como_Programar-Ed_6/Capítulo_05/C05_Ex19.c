/*
=======================================================================================================================
Filename:       C05_Ex19.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.19 Exibindo um quadrado de asteriscos. Escreva uma função que apresente um quadrado sólido de
                asteriscos cujo lado é especificado no parâmetro inteiro side.
                Por exemplo, se side é 4, a função exibe:
                    ****
                    ****
                    ****
                    ****
Date:           06/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define SIDE 10

void imprimeQuadrado( int lado );

int main( void )
{
    imprimeQuadrado( SIDE );
    
    return 0;
}


void imprimeQuadrado( int lado )
{
    int i, j;

    for( i = 0; i < lado; i++ ){
        for(j = 0; j < lado; j++ ){
            printf( "*  " );
        }
        printf( "\n" );
    }
}
