/*
=======================================================================================================================
Filename:       C04_Ex06.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                6 Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
                utilizando as seguintes fórmulas (em que "h" corresponde à altura):
                    Homens: (72,7 * h) - 58
                    Mulheres: (62,1 * h) - 44,7
Date:           05/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    float altura;
    char sexo;
    float pesoIdeal;

    scanf( "%f %c", &altura, &sexo );

    if( sexo == 'h' ){
        pesoIdeal =  (72.7 * altura) - 58;
    }
    else{
        pesoIdeal =  (62.1 * altura) - 44.7;
    }
    
    printf( "Peso Ideal: %.2f\n", pesoIdeal );

    return 0;
}
