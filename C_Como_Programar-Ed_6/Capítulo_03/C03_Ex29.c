/*
=======================================================================================================================
Filename:       C03_Ex29.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.29 O que o programa a seguir exibe?
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int contador = 1;

    while( contador <= 10 ){
        printf( "%s\n", contador % 2 ? "****" : "++++++++" );
        contador++;
    }
    
    return 0; 
}
