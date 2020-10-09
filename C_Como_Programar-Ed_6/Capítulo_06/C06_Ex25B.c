/*
=======================================================================================================================
Filename:       C06_Ex25B.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.25B Provavelmente, o programa anterior produziu um passeio relativamente curto. Agora, modifique seu
                programa para tentar 1000 passeios. Use um array de subscrito único para registrar o número de passeios
                de cada extensão. Quando seu programa terminar de experimentar os 1000 passeios, ele deverá mostrar
                essa informação em formato tabular. Qual foi o melhor resultado?
Date:           09/10/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TESTES 1000

int validaMovimentos( int tab[8][8], int linha, int coluna, int mov );
void move( int *linha, int *coluna, int mov, int tarefa );
void imprimeTabuleiro( int tab[][8] );
void limpaTabuleiro( int tab[8][8] );

int main( void )
{
    int tabuleiro[8][8] = { 0 };
    int atualLinha, atualColuna;
    int movimento; //indica as opções de movimentos entre 0 e 7
    int contaCasa = 0; // contador de quadrados em que o cavalo passou

    int frequenciaPasseio[65] = { 0 };
    int i, j;

    srand( time( NULL ) );
    
    for( i = 0; i < TESTES; i++ ){
        atualLinha = rand() % 8;
        atualColuna = rand() % 8;
        tabuleiro[atualLinha][atualColuna] = ++contaCasa; 

        while( validaMovimentos( tabuleiro, atualLinha, atualColuna, -1 ) ){
            movimento = rand() % 8;

            if( validaMovimentos( tabuleiro, atualLinha, atualColuna, movimento ) ){
                move( &atualLinha, &atualColuna, movimento, 1 );
                tabuleiro[atualLinha][atualColuna] = ++contaCasa;
            }
        }

        ++frequenciaPasseio[contaCasa];
        contaCasa = 0;
        limpaTabuleiro( tabuleiro );
    }
    
    printf( "%18s%15s\n", "TAMANHO DO PASSEIO", "FREQUENCIA" );
    for( i = 1; i < 65; i++ ){
        if( frequenciaPasseio[i] )
            printf( "%18d%15d\n", i, frequenciaPasseio[i] );
    }

   return 0;
}

//valida se movimento é possível no tabuleiro
// mov < 0 indica que todos os movimentos serão testados
int validaMovimentos( int tab[8][8], int linha, int coluna, int mov )
{
    if( mov < 0 ){
        for( mov = 0; mov < 8; mov++ ){
            move( &linha, &coluna, mov, 1 );

            if( ( linha < 8 && linha >= 0 ) && ( coluna < 8 && coluna >= 0 ) && ( 0  == tab[ linha ] [ coluna ] ) ){
                move( &linha, &coluna, mov, 0 );
                return 1;
            }
            else{
                move( &linha, &coluna, mov, 0 );
            }      
        }
    }
    else{
        move( &linha, &coluna, mov, 1 );

        if( ( linha < 8 && linha >= 0 ) && ( coluna < 8 && coluna >= 0 ) && ( 0  == tab[ linha ] [ coluna ] ) ){
            return 1;
        } 
    }

    return 0;
}

void move( int *linha, int *coluna, int mov, int tarefa )
{
    const int HORIZONTAL[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    const int VERTICAL[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };

    if( tarefa ){
        *linha += VERTICAL[ mov ];
        *coluna += HORIZONTAL[ mov ];
    }
    else{
        *linha -= VERTICAL[ mov ];
        *coluna -= HORIZONTAL[ mov ];     
    }
}

void imprimeTabuleiro( int tab[][8] )
{
    int i, j;

    printf( "   0# 1# 2# 3# 4# 5# 6# 7#\n");
    for( i = 0; i < 8; i++ ){
        printf( "%d# ", i);
        for( j = 0; j < 8; j++ ){
            printf( "%2d ", tab[ i ][ j ] );
        }
        printf( "\n" );
    }
    printf( "\n" );
}

void limpaTabuleiro( int tab[8][8] )
{
    int i, j;

    for( i = 0; i < 8; i++ ){
        for(j = 0; j < 8; j++ ) {
            tab[i][j] = 0;
        }
    }
}