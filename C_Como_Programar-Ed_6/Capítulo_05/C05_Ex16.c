/*
=======================================================================================================================
Filename:       C05_Ex16.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.16 Exponenciação Escreva uma função potenciaInt(base, expoente) que retorne o valor de baseexpoente
                Por exemplo, potenciaInt( 3, 4 ) = 3 * 3 * 3 * 3.
                Suponha que expoente seja um inteiro positivo, diferente de zero, e base seja um inteiro. A função
                potenciaInt deve usar for para controlar o cálculo. Não use funções da biblioteca matemática.
Date:           22/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int potenciaInt( int baseF, int expoenteF );

int main( void )
{
    int base, expoente;

    scanf( "%d %d", &base, &expoente );
    printf( "%d\n", potenciaInt( base, expoente ) );

    return 0;
}


int potenciaInt( int baseF, int expoenteF )
{
    int contador, potencia = 1;

    for( contador = 1; expoenteF >= contador; contador++ ){
        potencia *= baseF;
    }

    return potencia;
}
