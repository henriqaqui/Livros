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

int validaMovimentos( int tab[8][8], int linha, int coluna, int mov );

int main( void )
{
    const int HORIZONTAL[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    const int VERTICAL[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int tabuleiro[8][8] = { 0 };
    int atualLinha, atualColuna, testaLinha, testaColuna;
    int movimentoCavalo; //indica as opções de movimentos entre 0 e 7
    int contaCasa = 0; // contador de quadrados em que o cavalo passou
    int i, j;

    srand( time( NULL ) );
    atualLinha = testaLinha = rand() % 8;
    atualColuna = testaColuna = rand() % 8;
    tabuleiro[atualLinha][atualColuna] = ++contaCasa; 

    while( validaMovimentos( tabuleiro, atualLinha, atualColuna, -1 ) ){
        movimentoCavalo = rand() % 8;

        if( validaMovimentos( tabuleiro, atualLinha, atualColuna, movimentoCavalo ) ){
            atualLinha += VERTICAL[movimentoCavalo];
            atualColuna += HORIZONTAL[movimentoCavalo];
            tabuleiro[atualLinha][atualColuna] = ++contaCasa;
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

    printf( "Total de casas percorridas: %d\n", contaCasa );

   return 0;
}


//valida se movimento é possível no tabuleiro
// mov < 0 indica que todos os movimentos serão testados
int validaMovimentos( int tab[8][8], int linha, int coluna, int mov )
{
    const int HORIZONTAL[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    const int VERTICAL[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };

    if( mov < 0 ){
        for( mov = 0; mov < 8; mov++ ){
            linha += VERTICAL[mov];
            coluna += HORIZONTAL[mov];

            if( ( linha < 8 && linha >= 0 ) && ( coluna < 8 && coluna >= 0 ) && ( 0  == tab[ linha ] [ coluna ] ) ){
                    return 1;
            }
            else{
                linha -= VERTICAL[mov];
                coluna -= HORIZONTAL[mov];
            }
            
        }
    }
    else{
        linha += VERTICAL[mov];
        coluna += HORIZONTAL[mov];

        if( ( linha < 8 && linha >= 0 ) && ( coluna < 8 && coluna >= 0 ) && ( 0  == tab[ linha ] [ coluna ] ) ){
                return 1;
            }
    }

    return 0;
}
