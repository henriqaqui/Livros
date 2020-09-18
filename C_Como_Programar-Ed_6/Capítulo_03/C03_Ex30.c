/*
=======================================================================================================================
Filename:       C03_Ex30.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.30 O que o programa a seguir exibe?
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int linha = 10;
    int coluna;

    while( linha >= 1 ){
        coluna = 1;

        while( coluna <= 10 ){
            printf( "%s", linha % 2 ? "<" : ">" );
            coluna++;
        }
        
        linha--;
        printf( "\n" );
    }
    
    return 0; 
}
