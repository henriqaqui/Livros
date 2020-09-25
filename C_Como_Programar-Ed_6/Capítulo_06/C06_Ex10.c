/*
=======================================================================================================================
Filename:       C06_Ex10.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.10 Comissões de vendas. Use um array com subscrito único para resolver o problema a seguir.
                Uma empresa paga o salário de seus vendedores com base em uma comissão. O vendedor recebe R$ 200,00
                por semana, e mais 9 por cento de suas vendas brutas nessa semana. Por exemplo, um vendedor, que
                totalize R$ 3.000,00 em vendas em uma semana, receberá R$ 200,00 e mais 9 por cento de R$ 3.000,00, ou
                seja, R$ 470,00. Escreva um programa em C (usando um array de contadores) que determine quantos
                vendedores receberam salários dentro de cada um dos seguintes intervalos (suponha que o salário de cada
                vendedor seja arredondado em um valor inteiro):
                    a) R$ 200–299
                    b) R$ 300–399
                    c) R$ 400–499
                    d) R$ 500–599
                    e) R$ 600–699
                    f) R$ 700–799
                    g) R$ 800–899
                    h) R$ 900–999
                    i) R$ 1000 ou mais
Date:           25/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#include <string.h>

#define FUNCIONARIO 30
#define SALARIOFIXO 200.00
#define PERC_COMISSAO .09

void calculaSalario( const float vendas[], float comissoes[], int qtdVendedores );
void contarSalario( const float vendas[], int qtdVendedores );

int main( void )
{
    float vendaBruta[ FUNCIONARIO ] =
        { 7577, 6724, 3920, 7648, 4305, 4909, 3452, 1181, 5233, 8389,
          6628,	3474, 6250,	7256, 5692, 3721, 6896, 6268, 8783, 9915,
          4150,	6041, 6131, 8191, 6880,	9242, 7451,	5687, 4190,	3956 };
    float comissao[ FUNCIONARIO ];

    calculaSalario( vendaBruta, comissao, FUNCIONARIO );

    contarSalario( comissao, FUNCIONARIO );

    return 0; 
}


void calculaSalario( const float vendas[], float comissoes[], int qtdVendedores)
{
    int i;

    for( i = 0; i < qtdVendedores; i++ ){
        comissoes[i] = ( vendas[i] * PERC_COMISSAO ) + SALARIOFIXO;
    }
}


void contarSalario( const float comissoes[], int qtdVendedores )
{
    float salarioFixo = 200;
    int contagem[9] ={ 0 };
    int i, j;

    for(i = 0; i < qtdVendedores; i++){
        if( (int)comissoes[i] >= 1000 ){
            ++contagem[8];
        }
        else if( (int)comissoes[i] >= 900 ){
            ++contagem[7];
        }
        else if( (int)comissoes[i] >= 800 ){
            ++contagem[6];
        }
        else if( (int)comissoes[i] >= 700 ){
            ++contagem[5];
        }
        else if( (int)comissoes[i] >= 600 ){
            ++contagem[4];
        }
        else if( (int)comissoes[i] >= 500 ){
            ++contagem[3];
        }
        else if( (int)comissoes[i] >= 400 ){
            ++contagem[2];
        }
        else if( (int)comissoes[i] >= 300 ){
            ++contagem[1];
        }
        else{
            ++contagem[0];
        }
    }

    printf( "Quantidade de funcionarios por faixa salarial\n\n" );
    printf( "%21s\t%10s\tHistograma\n", "Valor", "Quantidade" );

    for(i = 0; i <= 8; i++ ){
        if( i < 8){
            printf( "R$ %.2f - R$ %.2f\t%10d\t", salarioFixo, salarioFixo + 99, contagem[i] );
            for(j = 1; j <= contagem[i]; j++){ //esse histograma não foi pedido.
                printf( "*" );
            }
            printf( "\n" );
            salarioFixo += 100;
        }
        else{
            printf( "R$ %.2f ou mais\t%10d\t", salarioFixo, contagem[i], '*' * contagem[i] );
            for(j = 1; j <= contagem[i]; j++){
                printf( "*" );
            }
            printf( "\n" );
        }
    }
}
