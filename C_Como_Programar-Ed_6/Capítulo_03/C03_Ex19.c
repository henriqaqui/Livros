/*
=======================================================================================================================
Filename:       C03_Ex19.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.19 Calculadora de comissão de vendas. Uma grande companhia química pafa seus vendedores por comissão.
                Os vendedores recebem R$ 200,00 por semana, mais 9 por cento de suas vendas brutas nessa semana. Por
                exemplo, um vendendor que comercialize R$ 5.000,00 em produtos químicos em uma semana receberá
                R$ 200,00 e mais 9 por cento de R$ 5.000,00, ou seja, receberá um total de R$ 650,00. Desenvolva um
                programa que peça os valores brutos de cada vendedor na semana que passou, calcule e apresente o valor
                que esse vendedor deverá receber. Processe os valores referentes a um vendendo por vez.
Date:           16/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    const float fixoSemana = 200.00, porcentagemComissao = .09;

    float vendas, pagamento;

    printf( "Informe a venda em reais (-1 para terminar): " );
    scanf( "%f", &vendas);

    while( -1 != vendas){
        pagamento = (vendas * porcentagemComissao) + fixoSemana;
        printf( "O pagamento e de: %.2f\n\n", pagamento );

        printf( "Informe a venda em reais (-1 para terminar): " );
        scanf( "%f", &vendas);       
    }
    
    return 0;
}
