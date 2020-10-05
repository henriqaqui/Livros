/*
=======================================================================================================================
Filename:       C04_Ex07.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                7 Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa
                diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de
                destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que
                ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.
                    Estado  MG      SP      RJ      MS
                    Imposto 7%      12%     15%     8%
Date:           05/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    const float IMPOSTO[4] = { .07, .12, .15, .08 }; //imposto MG, SP, RJ, MS
    float valor, precoFinal;
    int codigoEstado;

    printf( "Digite o valor do produto:\n");
    scanf( "%f", &valor );
    printf( "Digite o codigo correspondente ao Estado:\n\tEstado\t0\t1\t2\t3\n\tCodigo\tMG\tSP\tRJ\tMS\n");
    scanf( "%d", &codigoEstado );

    precoFinal = valor + ( valor * IMPOSTO[ codigoEstado ] );

    printf( "Valor final: R$%.2f\n", precoFinal );

    return 0;
}
