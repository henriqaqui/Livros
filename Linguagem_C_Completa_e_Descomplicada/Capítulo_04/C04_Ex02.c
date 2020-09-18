/*
=======================================================================================================================
Filename:       C04_Ex02.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                2 Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem
                iguais, imprima a mensagem "Números iguais".
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int num1, num2;

    scanf( "%d %d", &num1, &num2 );

    if( num1 > num2 ){
        printf( "%d\n", num1 );
    }
    else if( num2 > num1 ){
        printf( "%d\n", num2 );
    }
    else{
        printf( "Numeros iguais\n");
    }

    return 0;
}
