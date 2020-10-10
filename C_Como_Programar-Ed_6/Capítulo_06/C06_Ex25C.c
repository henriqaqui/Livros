/*
=======================================================================================================================
Filename:       C06_Ex25C.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.25C Provavelmente, o programa anterior lhe ofereceu alguns passeios ‘respeitáveis’, mas não passeios
                completos. Agora, ‘retire todas as restrições’, e simplesmente deixe que seu programa seja executado
                até que produza um passeio completo. [Cuidado: essa versão do programa poderia ser executada por horas
                em um computador poderoso.] Mais uma vez, mantenha uma tabela dos números de passeios de cada
                extensão e imprima essa tabela quando o primeiro passeio completo for encontrado. Quantos passeios
                seu programa fez até produzir um passeio completo? Quanto tempo ele levou para fazer isso?
Date:           09/10/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    int i;

    srand( time( NULL ) );
    
    while( contaCasa != 64 ){
        contaCasa = 0;
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
        ++frequenciaPasseio[0];
        limpaTabuleiro( tabuleiro );
    }
    
    printf( "Total de testes: %d\n", frequenciaPasseio[0] );

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
