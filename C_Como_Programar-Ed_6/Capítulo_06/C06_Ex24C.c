/*
=======================================================================================================================
Filename:       C06_Ex24C.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.24C Passeio do cavalo. Agora escreva uma versão do programa Passeio do Cavalo usando a heurística de 
                acessibilidade. A qualquer momento, o cavalo deverá se mover para o quadrado com o menor número de
                acessibilidade. No caso de um empate, o cavalo pode se mover para qualquer um dos quadrados com a mesma
                classificação. Portanto, o passeio pode começar em qualquer um dos quatro cantos. [Nota: à medida que o
                cavalo se move pelo tabuleiro, seu programa deverá reduzir os números de acessibilidade quando mais e
                mais quadrados forem ocupados. Desse modo, em qualquer momento durante o passeio, o número de
                acessibilidade de cada quadrado disponível continuará sendo igual a exatamente o número de quadrados
                dos quais esse quadrado pode ser alcançado.] Execute essa versão de seu programa. Você consegue fazer
                um passeio completo? Agora, modifique o programa para realizar 64 passeios, um a partir de cada
                quadrado do tabuleiro. Quantos passeios completos você fez?
Date:           01/10/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int validaMovimentos( int tab[8][8], int linha, int coluna, int mov );
void move( int *linha, int *coluna, int mov, int tarefa );
int melhorMovimento( int tab[8][8], int linha, int coluna);

int main( void )
{
    int tabuleiro[8][8] = { 0 };
    int atualLinha, atualColuna, inicio[2] = { 0, 7 };
    int movimentoCavalo; //indica as opções de movimentos entre 0 e 7
    int contaCasa = 0; // contador de quadrados em que o cavalo passou
    int i, j;

    srand( time( NULL ) );
    atualLinha = inicio[ rand() % 2 ];
    atualColuna = inicio[ rand() % 2 ];
    tabuleiro[atualLinha][atualColuna] = ++contaCasa; 

    while( validaMovimentos( tabuleiro, atualLinha, atualColuna, -1 ) ){
        movimentoCavalo = melhorMovimento( tabuleiro, atualLinha, atualColuna );
        
        move( &atualLinha, &atualColuna, movimentoCavalo, 1 );
        tabuleiro[atualLinha][atualColuna] = ++contaCasa;
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
    return;
}

int melhorMovimento( int tab[8][8], int linha, int coluna )
{
    int mov;
    int menorAcess = 9;
    int possivelMovimento[8] = { 0 };
    int acessibilidade[ 8 ][ 8 ] = { 2, 3, 4, 4, 4, 4, 3, 2,
                                     3, 4, 6, 6, 6, 6, 4, 3,
                                     4, 6, 8, 8, 8, 8, 6, 4,
                                     4, 6, 8, 8, 8, 8, 6, 4,
                                     4, 6, 8, 8, 8, 8, 6, 4,
                                     4, 6, 8, 8, 8, 8, 6, 4,
                                     3, 4, 6, 6, 6, 6, 4, 3,
                                     2, 3, 4, 4, 4, 4, 3, 2 };
    for( mov = 0; mov < 8; mov++ ){
        move( &linha, &coluna, mov, 1 );

        if( ( linha < 8 && linha >= 0 ) && ( coluna < 8 && coluna >= 0 ) && ( 0  == tab[ linha ] [ coluna ] ) ){
            if( acessibilidade[linha][coluna] < menorAcess ){
                menorAcess = acessibilidade[linha][coluna];
            }
        }

        move( &linha, &coluna, mov, 0 );
    }

    for( mov = 0; mov < 8; mov++ ){
        move( &linha, &coluna, mov, 1 ); 
        
        if( ( linha < 8 && linha >= 0 ) && ( coluna < 8 && coluna >= 0 ) && ( 0  == tab[ linha ] [ coluna ] ) ){
            if( acessibilidade[linha][coluna] == menorAcess ){
                ++possivelMovimento[mov];
            }
        } 

        move( &linha, &coluna, mov, 0 );
    }

    do{
        mov = rand() % 8;
    }while( possivelMovimento[ mov ] == 0 );

    return mov;
}
