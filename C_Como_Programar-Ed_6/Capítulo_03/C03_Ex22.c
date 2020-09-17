/*
=======================================================================================================================
Filename:       C03_Ex22.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.22 Pré-incrementando versus pós-incrementando. Escreva um programa que demonstre a diferença entre
                pré-decrementar e pós-decrementar usando o operador de decremento --.
Date:           17/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{   
    int x, y;

    printf( "Digite um numero inteiro (vamos chama-lo de y): " );
    scanf( "%d", &y );

    printf( "\ny = %d\n", y );

    x = --y;
    printf ( "Com o comando (pre-decremento):\nx = --y;\n\n\tx = %d\n\ty = %d\n\n", x, y );

    y++;

    printf( "Agora novamente:\ny = %d\n", y );
        
    x = y--;
    printf ( "Com o comando (pos-decremento):\nx = y--;\n\n\tx = %d\n\ty = %d\n", x, y );

    return 0;
}
