/*
=======================================================================================================================
Filename:       C06_Ex19.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.19 Lançando dados. Escreva um programa que simule o lançamento de dois dados. O programa deverá usar
                rand para lançar o primeiro dado, e deverá usar rand novamente para lançar o segundo dado. Em seguida,
                a soma dos dois valores deverá ser calculada. [Nota: como cada dado pode mostrar um valor inteiro de 1
                a 6, então, a soma dos dois valores variará de 2 a 12, com 7 sendo o resultado mais frequente;
                e 2 e 12,os resultados menos frequentes.] A Figura 6.23 mostra as 36 combinações possíveis dos dois
                dados. Seu programa deverá lançar os dois dados 36.000 vezes. Use um array de subscrito único para
                contar o número de vezes em que cada resultado possível aparece. Imprima os resultados em um formato
                tabular. Além disso, determine se os resultados são razoáveis; ou seja, existem seis maneiras de somar
                um 7, de modo que um sexto de todas as jogadas, aproximadamente, deverá ser 7.
Date:           29/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCAMENTOS 36000
#define SOMA_LADOS 13 // ignora o 0 e 1 restando apenas as 11 somas possíveis.

int main( void )
{
    int dado1, dado2;
    int frequenciaSoma[ SOMA_LADOS ] = { 0 };
    int repeticoes; //conta quantos lançamentos foram feitos
    int somaFace; // indica as somas possíveis e é o contador de frequenciaSoma

    srand( time( NULL ) );

    for( repeticoes = 1; repeticoes <= LANCAMENTOS; repeticoes++ ){
        dado1 = 1 + rand() % 6;
        dado2 = 1 + rand() % 6;

        ++frequenciaSoma[ dado1 + dado2 ];
    }

    printf( "%14s%15s", "Soma das Faces", "Frequencia\n" );

    for( somaFace = 2; somaFace < SOMA_LADOS; somaFace++ ){
        printf( "%14d\t%12d\n", somaFace, frequenciaSoma[somaFace] );
    }

   return 0;
}
