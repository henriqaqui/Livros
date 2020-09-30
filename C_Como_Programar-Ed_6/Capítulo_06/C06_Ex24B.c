/*
=======================================================================================================================
Filename:       C06_Ex24B.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.24B Passeio do cavalo. vamos desenvolver um programa que movimentará o cavalo em um tabuleiro.
                O tabuleiro em si é representado por um array com subscrito duplo de 8 por 8 board. Cada um dos
                quadrados é inicializado em zero. Descreveremos cada um dos oito movimentos possíveis em termos de seus
                componentes horizontal e vertical. Por exemplo, um movimento do tipo 0, como mostra a Figura 6.25, 
                consiste em mover dois quadrados horizontalmente para a direita e um quadrado verticalmente para cima. 
                O movimento 2 consiste em mover um quadrado horizontalmente para a esquerda e dois quadrados
                verticalmente para cima. Movimentos horizontais à esquerda e verticais para cima são indicados por
                números negativos. Os oito movimentos podem ser descritos por dois arrays de subscrito único,
                horizontal e vertical, da seguinte forma:
                    horizontal[ 0 ] =   2           vertical[ 0 ] =   -1
                    horizontal[ 1 ] =   1           vertical[ 1 ] =   -2
                    horizontal[ 2 ] =  -1           vertical[ 2 ] =   -2
                    horizontal[ 3 ] =  -2           vertical[ 3 ] =   -1
                    horizontal[ 4 ] =  -2           vertical[ 4 ] =    1
                    horizontal[ 5 ] =  -1           vertical[ 5 ] =    2
                    horizontal[ 6 ] =   1           vertical[ 6 ] =    2
                    horizontal[ 7 ] =   2           vertical[ 7 ] =    1
                Considere que as variáveis currentRow e currentColumn indiquem a linha e coluna da posição atual do
                cavalo no tabuleiro. Para fazer um movimento do tipo moveNumber, onde moveNumber está entre 0 e 7,
                seu programa usa as instruções
                    currentRow += vertical[ moveNumber ];
                    currentColumn += horizontal[ moveNumber ];
                Mantenha um contador que varie de 1 a 64. Registre o maior contador em cada quadrado para onde o
                cavalo se mover. Lembre-se de testar cada movimento em potencial para ver se o cavalo já visitou esse
                quadrado. E, naturalmente, teste cada movimento potencial para garantir que o cavalo não saia do 
                tabuleiro. Agora, escreva um programa para mover o cavalo pelo tabuleiro. Execute o programa.
                Quantos movimentos o cavalo fez?
Date:           29/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CASAS 64

int testaMovimento( int tab[8][8], int hor[], int ver[], int linha, int coluna, int mov );
int testaMovimentos( int tab[8][8], int hor[], int ver[], int linha, int coluna );


int main( void )
{
    int tabuleiro[8][8] = { 0 };
    int horizontal[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int vertical[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int atualLinha, atualColuna;
    int movimentoCavalo; //indica as opções de movimentos entre 0 e 7
    int contaCasa; // contador de quadrados em que o cavalo passou
    int i, j;

    srand( time( NULL ) );
    atualLinha = rand() % 8;
    atualColuna = rand() % 8;
    movimentoCavalo = rand() % 8;

    tabuleiro[atualLinha][atualColuna] = 1;
    
    for( contaCasa = 1; contaCasa < CASAS; ){
        if( testaMovimentos( tabuleiro, horizontal, vertical, atualLinha, atualColuna ) ){
            do{
                movimentoCavalo = rand() % 8;
            }while( !(testaMovimento( tabuleiro, horizontal, vertical, atualLinha, atualColuna, movimentoCavalo ) ) );

            atualLinha += vertical[ movimentoCavalo ];
            atualColuna += horizontal[ movimentoCavalo ];

            tabuleiro[atualLinha][atualColuna] = ++contaCasa;
        }
        else{
            break;
        }
    }

    printf( "   0# 1# 2# 3# 4# 5# 6# 7#\n");
    for( i = 0; i < 8; i++ ){
        printf( "%d# ", i);
        for( j = 0; j < 8; j++ ){
            printf( "%2d ", tabuleiro[ i ][ j ] );
        }
        printf( "\n" );
    }

    printf( "Total de casas preenchidas: %d\n", contaCasa );

   return 0;
}


int testaMovimento( int tab[8][8], int hor[], int ver[], int linha, int coluna, int mov )
{
    if( (linha + ver[ mov ] < 8 && linha + ver[ mov ] >= 0) &&
        (coluna + hor[ mov ] < 8 && coluna + hor[ mov ] >= 0) &&
        tab[ linha + ver[ mov ] ] [ coluna + hor[ mov ] ] == 0 ){
            return 1;
    }

    return 0;
}


int testaMovimentos( int tab[8][8], int hor[], int ver[], int linha, int coluna )
{
    int i;

    for( i = 0; i < 8; i++ ){
        if( (linha + ver[ i ] < 8 && linha + ver[ i ] >= 0) &&
            (coluna + hor[ i ] < 8 && coluna + hor[ i ] >= 0) &&
            tab[ linha + ver[ i ] ] [ coluna + hor[ i ] ] == 0 ){
                return 1;
        }
    }

    return 0;
}
