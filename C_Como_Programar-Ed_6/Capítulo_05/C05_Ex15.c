/*
=======================================================================================================================
Filename:       C05_Ex15.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.15 Cálculos de hipotenusa. Defina uma função chamada hipotenusa que calcule o tamanho da hipotenusa
                de um triângulo retângulo quando os outros dois lados são conhecidos. Use essa função em um programa
                para determinar o tamanho da hipotenusa de cada um dos triângulos da tabela a seguir. A função deverá
                usar dois argumentos do tipo double e retornar a hipotenusa como um double. 
Date:           22/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <math.h>

void hipotenusa ( double, double );

int main( void )
{
    double ladoA, ladoB;

    scanf( "%lf %lf", &ladoA, &ladoB );
    hipotenusa( ladoA, ladoB );

    return 0; 
}


void hipotenusa ( double x, double y )
{
    double hip;

    hip = sqtr( pow( x, 2 ) + pow( y, 2 ) );

    printf( "%f\n", hip );

    return;
}
