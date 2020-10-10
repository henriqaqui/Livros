/*
=======================================================================================================================
Filename:       C06_Ex20.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.20 Jogo de craps. Escreva um programa que execute 1000 partidas de craps (sem intervenção humana)
                e responda a cada uma das perguntas a seguir:
                    a) Quantos jogos são ganhos no primeiro, no segundo, ..., no vigésimo lançamento e após o
                    vigésimo lançamento?
                    b) Quantos jogos são perdidos no primeiro, no segundo, ..., no vigésimo lançamento e após o
                    vigésimo lançamento?
                    c) Quais são as chances de se ganhar no craps? [Nota: você descobrirá que craps é um dos jogos
                    mais honestos do cassino. O que você acha que isso significa?]
                    d) Qual a média de lançamentos em um jogo de craps?
                    e) As chances de vencer crescem se o jogo se prolongar?
Date:           10/10/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PARTIDAS 1000

int jogarDados( void );

enum Estado { VENCE, PERDE, CONTINUA };

int main( void )
{
    enum Estado estadoJogo;
    
    int soma, meuPonto;
    int venceLance[21] = { 0 };
    int perdeLance[21] = { 0 };

    int contador, lance, somaLances = 0;

    float mediaLances;

    srand( time( NULL ) );

    for( contador = 0; contador < PARTIDAS; contador++ ){
        lance = 1;
        soma = jogarDados();

        switch ( soma ){
            case 7:
            case 11:
                estadoJogo = VENCE;
                break;
            
            case 2:
            case 3:
            case 12:
                estadoJogo = PERDE;
                break;

            default:
                estadoJogo = CONTINUA;
                meuPonto = soma;
                break;
        }

        while( estadoJogo == CONTINUA ){
            soma = jogarDados();

            if( 7 == soma ){
                estadoJogo = PERDE;
            }
            else if( soma == meuPonto ){
                estadoJogo = VENCE;
            }
            lance++;
        }

        somaLances += lance;

        if( lance > 20 ){
            lance = 0;
        }

        if( estadoJogo == VENCE ){
            venceLance[lance]++;
        }
        else{
            perdeLance[lance]++;
        }


    }

    mediaLances = (float)somaLances / PARTIDAS;

    printf( "%5s" "%12s" "%12s\n", "LANCE", "VITORIA", "DERROTA" );
    for( contador = 1; contador <= 20; contador++ ){
        printf( "%5d" "%12d" "%12d\n", contador, venceLance[contador], perdeLance[contador] );
    }
    printf( "%5s" "%12d" "%12d\n", "+20", venceLance[0], perdeLance[0] );

    printf( "\n%s%5d\n" "%s%12.2f\n\n", "Quantidade de partidas: ", PARTIDAS, "Media de lances: ", mediaLances );
    

    return 0;
}


int jogarDados( void )
{
    int dado1, dado2;
    int somaDados;

    dado1 = 1 + ( rand() % 6 );   
    dado2 = 1 + ( rand() % 6 );
    somaDados = dado1 + dado2;
   
    return somaDados;
}
