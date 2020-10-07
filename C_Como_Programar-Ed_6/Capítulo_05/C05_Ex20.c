/*
=======================================================================================================================
Filename:       C05_Ex20.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.20 Exibindo o quadrado de um caractere. Modifique a função criada no Exercício 5.19 para formar um
                quadrado a partir de qualquer caractere contido no parâmetro de caractere fillCharacter. Assim, se side
                é 5 e fillCharacter é ‘#’, então essa função deverá imprimir:
                    #####
                    #####
                    #####
                    #####
Date:           06/10/2020
=======================================================================================================================
*/

#include <stdio.h>

void imprimeQuadrado( int side, char fillCharacter );

int main( void )
{
    imprimeQuadrado( 10, '#' );
    
    return 0;
}


void imprimeQuadrado( int side, char fillCharacter )
{
    int i, j;

    for( i = 0; i < side; i++ ){
        for(j = 0; j < side; j++ ){
            printf( "%c  ", fillCharacter );
        }
        printf( "\n" );
    }
}
