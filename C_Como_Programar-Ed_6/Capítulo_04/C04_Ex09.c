/*
=======================================================================================================================
Filename:       C04_Ex09.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                4.9 Soma de uma sequência de inteiros. Escreva um programa que some uma sequência de inteiros.
                Considere que o primeiro inteiro lido com scanf especifique o número de valores restantes a serem
                inseridos. Seu programa deve ler apenas um valor toda vez que scanf for executado. Uma sequência
                de entrada típica poderia ser 5 100 200 300 400 500, onde 5 indica que os cinco valores subsequentes
                devem ser somados.
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int numero, somatorio = 0;
    int quantidadeLeitura;
    int contador;

    scanf( "%d", &quantidadeLeitura );

    for( contador = 1; contador <= quantidadeLeitura; contador++ ){
        scanf( "%d", &numero );
        somatorio += numero;
    }

    printf( "%d\n", somatorio );
    
    return 0; 
}
