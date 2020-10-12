/*
=======================================================================================================================
Filename:       C04_Ex14.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                4.14 Fatoriais. A função fatorial é usada com frequência nos problemas de probabilidade. O fatorial de
                um inteiro positivo n (escrito como n! e pronunciado como ‘fatorial de n’) é igual ao produto dos
                inteiros positivos de 1 a n. Escreva um programa que avalie os fatoriais dos inteiros de 1 a 5.
                Imprima os resultados em formato tabular.
                Que dificuldade poderia impedi-lo de calcular o fatorial de 20?
Date:           12/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define LIMITE 5

int main( void )
{
    int numero, fatorial;
    int nFatorial;

    for( nFatorial = 1; nFatorial <= LIMITE; nFatorial++ ){
        fatorial = 1;
        for( numero = 1; numero <= nFatorial; numero++ ){
            fatorial *= numero;
        }
        printf( "%2d! = %d\n", nFatorial, fatorial );
    }

    return 0; 
}
