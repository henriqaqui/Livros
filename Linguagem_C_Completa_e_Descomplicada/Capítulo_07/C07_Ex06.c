/*
=======================================================================================================================
Filename:       C07_Ex06.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                6 Leia uma string do teclado e conte quantas vogais ( a, e, i, o, u) ela possui. Entre com um caractere
                (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. Ao final, imprima
                a nova string e o número de vogais que ela possui.
Date:           18/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define TAMANHO 50

int contaVogais( char palavra[] );
void trocaVogais( char palavra[], char letra );

int main( void )
{
    char palavra[TAMANHO], letra;
    int vogais;

    printf( "Digite uma palavra: ");
    fgets( palavra, TAMANHO, stdin );

    printf( "Digite uma letra: ");
    letra = getchar();

    vogais = contaVogais( palavra );

    printf( "%s tem %d vogais.\n", palavra, vogais );

    trocaVogais( palavra, letra );

    printf( "Ao substituir as vogais a nova palavra e: %s\n", palavra );

    return 0;

}


int contaVogais( char palavra[] )
{
    const char vogais[10] = { "AaEeIiOoUu" };
    int i = 0, j;
    int total = 0;

    while( palavra[i] != '\0' ){
        for( j = 0; j < 10; j++ ){
            if( palavra[i] == vogais[j]){
                total++;
                continue;
            }
        }
        i++;
    }

    return total;
}


void trocaVogais( char palavra[], char letra )
{
    const char vogais[10] = { "AaEeIiOoUu" };
    int i = 0, j;

    while( palavra[i] != '\0' ){
        for( j = 0; j < 10; j++ ){
            if( palavra[i] == vogais[j]){
                palavra[i] = letra;
                continue;
            }
        }
        i++;
    }
}