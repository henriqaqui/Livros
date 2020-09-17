/*
=======================================================================================================================
Filename:       C03_Ex20.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.20 Calculadora de juros. Os juros simples sobre um empréstimo são calculados a partir da fórmula:
                    juros = principal * taxa * dias / 365;
                Essa fórmula considera que taxa seja taxa de juros anual e, portanto, inclui a divisão por 365 (dias).
                Desenvolva um programa que aceite principal, taxa e dias para vários empréstimos, calcule e apresente
                os juros simples para cada empréstimo, usando a fórmula apresentada.
Date:           17/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    const int DIAS_ANO = 365;

    float valorPrincipal, taxa, valorJuros;
    int dias;
    
    printf( "Informe o valor principal do emprestimo (-1 para terminar): " );
    scanf( "%f", &valorPrincipal );

    while( -1 != valorPrincipal ){
        printf( "Informe a taxa de juros: " );
        scanf( "%f", &taxa );
        printf( "Informe o prazo de emprestimo em dias: " );
        scanf( "%d", &dias );

        valorJuros = valorPrincipal * taxa * dias / DIAS_ANO;

        printf( "O valor do juros e de: %.2f\n\n", valorJuros );

        printf( "Informe o valor principal do emprestimo (-1 para terminar): " );
        scanf( "%f", &valorPrincipal );
    }    

    return 0;
}
