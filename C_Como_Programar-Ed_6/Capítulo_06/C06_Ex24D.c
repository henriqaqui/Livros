/*
=======================================================================================================================
Filename:       C06_Ex24D.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.24D Escreva uma versão do programa Passeio do Cavalo que, ao encontrar um empate entre dois ou mais
                quadrados, decida qual quadrado escolher ao considerar o que poderia acontecer adiante, verificando
                os quadrados alcançáveis pelos quadrados ‘empatados’. Seu programa deverá se mover para o quadrado pelo
                qual o próximo movimento alcançará um quadrado com o menor número de acessibilidade.
Date:           01/10/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int validaMovimentos( int tab[8][8], int linha, int coluna, int mov );
void move( int *linha, int *coluna, int mov, int tarefa );
void imprimeTabuleiro( int tab[][8] );
int melhorMovimento( int tab[8][8], int linha, int coluna);
void limpaTabuleiro( int tab[8][8] );


int main( void )
{
    int tabuleiro[8][8] = { 0 };
    int atualLinha, atualColuna;
    int movimento; //indica as opções de movimentos entre 0 e 7
    int contaCasa ; // contador de quadrados em que o cavalo passou
    int i;
    int contaPasseios[ 65 ] = { 0 };
    
    srand( time( NULL ) );
    
    contaCasa = 0;

    atualLinha = rand() % 8;
    atualColuna = rand() % 8;

    tabuleiro[atualLinha][atualColuna] = ++contaCasa; 

    while( validaMovimentos( tabuleiro, atualLinha, atualColuna, -1 ) ){
        movimento = melhorMovimento( tabuleiro, atualLinha, atualColuna );
        
        move( &atualLinha, &atualColuna, movimento, 1 );
        tabuleiro[atualLinha][atualColuna] = ++contaCasa;
    }

    ++contaPasseios[ contaCasa ];
        
    imprimeTabuleiro( tabuleiro );
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
    static int heuristica[ 8 ][ 8 ] = { { 2, 3, 4, 4, 4, 4, 3, 2 },
                                        { 3, 4, 6, 6, 6, 6, 4, 3 },
                                        { 4, 6, 8, 8, 8, 8, 6, 4 },
                                        { 4, 6, 8, 8, 8, 8, 6, 4 },
                                        { 4, 6, 8, 8, 8, 8, 6, 4 },
                                        { 4, 6, 8, 8, 8, 8, 6, 4 },
                                        { 3, 4, 6, 6, 6, 6, 4, 3 },
                                        { 2, 3, 4, 4, 4, 4, 3, 2 } };
    int mov;
    int menorHeuristica = 9;
    int contaPossivelMovimento = 0;

    int testeLinha, testeColuna;
    int testeMov;
    int testeMenorHeuristica = 9;
    int melhorMovimento, melhorMovimentoEmpate;

    for( mov = 0; mov < 8; mov++ ){
        move( &linha, &coluna, mov, 1 );

        if( ( linha < 8 && linha >= 0 ) && ( coluna < 8 && coluna >= 0 ) && ( 0  == tab[ linha ] [ coluna ] ) ){
            if( heuristica[linha][coluna] < menorHeuristica ){
                menorHeuristica = heuristica[linha][coluna];
                melhorMovimento = mov;
            }
        }

        move( &linha, &coluna, mov, 0 );
    }

    for( mov = 0; mov < 8; mov++ ){
        move( &linha, &coluna, mov, 1 );
        
        if( ( linha < 8 && linha >= 0 ) && ( coluna < 8 && coluna >= 0 ) && ( 0  == tab[ linha ] [ coluna ] ) ){
            if( heuristica[linha][coluna] == menorHeuristica ){
                ++contaPossivelMovimento;

                tab[linha][coluna] = 1;
                testeLinha = linha;
                testeColuna = coluna;

                for( testeMov = 0; testeMov < 8; testeMov++ ){
                    move( &testeLinha, &testeColuna, testeMov, 1 );

                    if( ( testeLinha < 8 && testeLinha >= 0 ) && ( testeColuna < 8 && testeColuna >= 0 ) &&
                        ( 0  == tab[ testeLinha ] [ testeColuna ] ) ){
                        if( heuristica[testeLinha][testeColuna] < testeMenorHeuristica ){
                            testeMenorHeuristica = heuristica[testeLinha][testeColuna];
                            melhorMovimentoEmpate = mov;
                        }
                    }
                    move( &testeLinha, &testeColuna, testeMov, 0 );
                }

                move( &testeLinha, &testeColuna, testeMov, 0 );

                tab[linha][coluna] = 0;
            }
            --heuristica[linha][coluna];
        }
        move( &linha, &coluna, mov, 0 ); 
    }

    if( contaPossivelMovimento > 1 ){
        return melhorMovimentoEmpate;
    }
    else{
        return melhorMovimento;
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
