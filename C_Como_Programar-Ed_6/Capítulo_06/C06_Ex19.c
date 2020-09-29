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
#define POSSIBILIDADES 36
#define SOMA_LADOS 13 // ignora o 0 e 1 restando apenas as 11 somas possíveis

float calculaProbabilidade( float ocorrencia, float total );
float calculaVariacao( float probabilidade1, float probabilidade2 );

int main( void )
{
    //probabilidade de ocorrer as somas(2 a 12) nas 36 possibilidades existentes
    const int OCORRENCIA[] = { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 }; 

    int dado1, dado2;
    int frequenciaSoma[ SOMA_LADOS ] = { 0 };
    int repeticoes; //conta quantos lançamentos foram feitos
    int somaFace; // indica as somas possíveis e é o contador de frequenciaSoma
    float probReal, probPrograma; // aramazenam a probabilidade de ocorrencia das somas

    srand( time( NULL ) );

    for( repeticoes = 1; repeticoes <= LANCAMENTOS; repeticoes++ ){
        dado1 = 1 + rand() % 6;
        dado2 = 1 + rand() % 6;

        ++frequenciaSoma[ dado1 + dado2 ];
    }

    printf( "%14s" "%15s" "%23s" "%30s" "%13s", "Soma das Faces", "Frequencia", "Probabilidade Real",
        "Probabilidade do Programa", "Variacao\n" );

    for( somaFace = 2; somaFace < SOMA_LADOS; somaFace++ ){
        probReal = calculaProbabilidade( OCORRENCIA[somaFace], POSSIBILIDADES );
        probPrograma = calculaProbabilidade( frequenciaSoma[somaFace], LANCAMENTOS );

        printf( "%14d" "%15d" "%22.2f%%" "%29.2f%%" "%+11.2f%%\n", somaFace, frequenciaSoma[ somaFace ],
            probReal, probPrograma, calculaVariacao( probReal, probPrograma ) );
    }

   return 0;
}


float calculaProbabilidade( float ocorrencia, float total )
{
    return ocorrencia / total * 100;
}


float calculaVariacao( float probabilidade1, float probabilidade2 )
{
    float variacao;

    variacao = probabilidade1 - probabilidade2;
    
    if( variacao < 0 ){
        variacao = variacao / probabilidade1 * 100 ;
    }
    else{
         variacao = variacao / probabilidade2 * 100 ;
    }

    return -variacao;
}
