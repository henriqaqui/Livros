/*
=======================================================================================================================
Filename:       C05_Ex21.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.21 Projeto: desenhando formas com caracteres. Use técnicas semelhantes às que foram desenvolvidas
                nos exercícios 5.19 a 5.20 para produzir um programa que represente graficamente uma grande variedade
                de formas.
Date:           07/10/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void imprimeQuadrado( int side, char fillCharacter );
void imprimeTriangulo( int side, char fillCharacter );
void imprimeLosango( int side, char fillCharacter );
void imprimeTrapesio( int side, char fillCharacter );
void imprimeHexagono( int side, char fillCharacter );

int main( void )
{
    char caractere;

    srand( time(NULL) );

    do{
        caractere = rand() % 127;
    }while( caractere < 1 || caractere == 32 );

    imprimeQuadrado( SIZE, caractere );
    imprimeTriangulo( SIZE, caractere );
    imprimeLosango( SIZE, caractere );
    imprimeTrapesio( SIZE, caractere );
    imprimeHexagono( SIZE, caractere );

    return 0;
}


void imprimeQuadrado( int side, char fillCharacter )
{
    int i, j;

    for( i = 0; i < side; i++ ){
        for(j = 0; j < side * 2; j++ ){
            printf( "%c", fillCharacter );
        }
        printf( "\n" );
    }
    printf( "\n" );
}


void imprimeTriangulo( int side, char fillCharacter )
{
    int i, j;

    for( i = 1; i <= side; i++ ){
        for(j = 1; j <= side * 2; j++ ){
            if( j <= side - i || j > side + i ){
                printf( " " );
            }
            else{
                printf( "%c", fillCharacter );
            }
        }
        printf( "\n" );
    }
    printf( "\n" );
}


void imprimeLosango( int side, char fillCharacter )
{
    int i, j;
    int tamanhoMetade = side / 2;
    int tamanhoDobro = side * 2;

    for( i = 1; i <= tamanhoMetade; i++ ){
        for(j = 1; j <= tamanhoDobro; j++ ){
            if( j <= side - i || j > side + i ){
                printf( " " );
            }
            else{
                printf( "%c", fillCharacter );
            }
        }
        printf( "\n" );
    }

    for( ; i <= side; i++ ){
        for(j = 1; j <= tamanhoDobro; j++ ){
            if( j < i || j > tamanhoDobro - ( i - 1 ) ){
                printf( " " );
            }
            else{
                printf( "%c", fillCharacter );
            }
        }
        printf( "\n" );
    }
    printf( "\n" );
}


void imprimeTrapesio( int side, char fillCharacter )
{
    int i, j;
    int tamanhoMetade = side / 2;
    int tamanhoDobro = side * 2;

    for( i = 1; i <= tamanhoMetade; i++ ){
        for(j = 1; j <= tamanhoDobro; j++ ){
            if( j <= side - ( tamanhoMetade + i ) || j >= side + ( tamanhoMetade + i) ){
                printf( " " );
            }
            else{
                printf( "%c", fillCharacter );
            }
        }
        printf( "\n" );
    }
    printf( "\n" );
}


void imprimeHexagono( int side, char fillCharacter )
{
    int i, j;
    int tamanhoMetade = side / 2;
    int tamanhoDobro = side * 2;

    for( i = 1; i <= tamanhoMetade; i++ ){
        for(j = 1; j <= tamanhoDobro; j++ ){
            if( j <= side - ( tamanhoMetade + i ) || j > side + ( tamanhoMetade + i ) ){
                printf( " " );
            }
            else{
                printf( "%c", fillCharacter );
            }
        }
        printf( "\n" );
    }

    for( i = 1; i <= tamanhoMetade; i++ ){
        for(j = 1; j <= tamanhoDobro; j++ ){
            if( j < i || j > tamanhoDobro - ( i - 1 ) ){
                printf( " " );
            }
            else{
                printf( "%c", fillCharacter );
            }
        }
        printf( "\n" );
    }
    printf( "\n" );
}