/*
=======================================================================================================================
Filename:       C03_Ex23.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.23 Imprimindo números por loop. Escreva um programa que utilize o looping para imprimir os números
                de 1 a 10 lado a lado na mesma linha, com três espaços entre os números.
Date:           17/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{   
    int i = 1;

    while( i <= 10 ){
        printf( "%d   ", i );
        i++;
    }

    return 0;
}
