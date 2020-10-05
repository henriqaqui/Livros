/*
=======================================================================================================================
Filename:       C04_Ex05.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                5 Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
                o numero digitado ao quadrado e a raiz quadrada do número digitado.
Date:           03/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int numero;
    int potenciaQuadrada, raizQuadrada;

    scanf( "%d", &numero );

    if( numero >= 0 ){
        potenciaQuadrada = pow( numero, 2 );
        raizQuadrada = sqrt( numero );
        printf( "Ao quadrado: %d\nRaiz quadrada: %d\n", potenciaQuadrada, raizQuadrada );
    }

    return 0;
}
