/*
=======================================================================================================================
Filename:       C02_Ex31.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.31 Usando apenas as técnicas que você aprendeu neste capítulo, escreva um programa que calcule
                os quadrados e os cubos dos números de 0 a 10, e use tabulações para imprimir a seguinte
                tabela de valores:
                    número  quadrado    cubo
                    0       0           0
                    1       1           1
                    2       4           8
                    3       9           27
                    4       16          64
                    5       25          125
                    6       36          216
                    7       49          343
                    8       64          512
                    9       81          729
                    10      100         1000
Date:           10/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    printf( "numero\tquadrado\tcubo\n" );
    printf( "0\t%d\t\t%d\n", 0*0, 0*0*0 );
    printf( "1\t%d\t\t%d\n", 1*1, 1*1*1 );
    printf( "2\t%d\t\t%d\n", 2*2, 2*2*2 );
    printf( "3\t%d\t\t%d\n", 3*3, 3*3*3 );
    printf( "4\t%d\t\t%d\n", 4*4, 4*4*4 );
    printf( "5\t%d\t\t%d\n", 5*5, 5*5*5 );
    printf( "6\t%d\t\t%d\n", 6*6, 6*6*6 );
    printf( "7\t%d\t\t%d\n", 7*7, 7*7*7 );
    printf( "8\t%d\t\t%d\n", 8*8, 8*8*8 );
    printf( "9\t%d\t\t%d\n", 9*9, 9*9*9 );
    printf( "10\t%d\t\t%d\n", 10*10, 10*10*10 );

    return 0;
}
