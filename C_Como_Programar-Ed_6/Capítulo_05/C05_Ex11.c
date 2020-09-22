/*
=======================================================================================================================
Filename:       C05_Ex11.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.11 Arredondando números. A função floor pode ser usada para arredondar um número até uma casa decimal
                específica. A instrução y = floor( x * 10 + 5 ) / 10; arredonda x até a posição de décimos (a primeira
                posição à direita do ponto decimal). A instrução y = floor( x * 100 + .5 ) / 100; arredonda x até a
                posição de centésimos (a segunda posição à direita do ponto decimal). Escreva um programa que define
                quatro funções que arredondem um número x de várias maneiras:
                    a) arredInteiro( número )
                    b) arredDecimos( número )
                    c) arredCentesimos( número )
                    d) arredMilesimos( número )
                Para cada valor lido, seu programa deverá imprimir o valor original, o número arredondado até o próximo
                inteiro, o número arredondado até o próximo décimo, até o próximo centésimo e até o próximo milésimo.
Date:           21/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <math.h>

#define SENTINELA -1

double arredInteiro( double );
double arredDecimos( double );
double arredCentesimos( double );
double arredMilesimos( double );

int main( void )
{
    double numero;

    printf( "Digite um numero real (-1 para terminar): " );
    scanf( "%lf", &numero);

    while( numero != SENTINELA ){
        printf( "Arrendondamento Inteiro: %.0f\n", arredInteiro( numero ));
        printf( "Arrendondamento Decimos: %.1f\n", arredDecimos( numero ));
        printf( "Arrendondamento Centesimos: %.2f\n", arredCentesimos( numero ));
        printf( "Arrendondamento Milesimo: %.3f\n\n", arredMilesimos( numero ));

        printf( "Digite um numero real (-1 para terminar): " );
        scanf( "%lf", &numero);
    }

    return 0; 
}


double arredInteiro( double x )
{
    return floor( x + .5 );
}

double arredDecimos( double x )
{
    return floor( x * 10 + .5 ) / 10;
}

double arredCentesimos( double x )
{
    return floor( x * 100 + .5 ) / 100;
}

double arredMilesimos( double x )
{
    return floor( x * 1000 + .5 ) / 1000;
}
