/*
=======================================================================================================================
Filename:       C07_Ex07.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                7 Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não.
                Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda
                como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.
Date:           27/10/2020
=======================================================================================================================
*/
#include <stdio.h>
#include <string.h>

#define SIZE 15

int main( void )
{
    char palavra[SIZE];

    fgets( palavra, SIZE, stdin );

    printf( "A palavra \"%s\" %s.\n" , palavra, palindromo( palavra ) ? "e um palindromo" : "nao e um palindromo" );

    return 0;
}

int palindromo ( char string[] )
{
    int i, j;
    int tamanho;

    tamanho = strlen( string ) - 1;

    //tratar o /n que vem da função fgets
    if( string[tamanho] == '\n' ){
        string[tamanho] = '\0';
    } //fim

    for( i = 0, j = tamanho - 1; i < tamanho; i++, j-- ){
        if( !(string[i] == string[j]) ){
            return 0;
        }
    }

    return 1;
}
