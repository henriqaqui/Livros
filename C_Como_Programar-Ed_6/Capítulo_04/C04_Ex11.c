/*
=======================================================================================================================
Filename:       C04_Ex11.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                4.11 Ache o menor. Escreva um programa que encontre o menor de vários inteiros. Considere que o
                primeiro valor lido especifique o número de valores restantes.
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int numero, menor;
    int quantidadeLeitura;
    int contador = 1;

    scanf( "%d", &quantidadeLeitura );

    if( quantidadeLeitura > 0 ){
        scanf ( "%d", &numero );
        menor = numero;

        for( ++contador; contador <= quantidadeLeitura; contador++ ){
            scanf( "%d", &numero );
            
            if( numero < menor){
                menor = numero;
            }
        }

        printf( "%d\n", menor );
    }

    return 0; 
}
