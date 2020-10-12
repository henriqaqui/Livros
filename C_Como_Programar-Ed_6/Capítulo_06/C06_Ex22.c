/*
=======================================================================================================================
Filename:       C06_Ex22.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.22 Total de vendas. Use um array de subscrito duplo para resolver o problema a seguir. Uma empresa
                tem quatro vendedores (1 a 4) que vendem cinco produtos diferentes (1 a 5). Uma vez por dia, cada
                vendedor passa uma nota para cada tipo diferente de produto vendido. Cada nota contém:
                    a) O número do vendedor.
                    b) O número do produto.
                    c) O valor em reais desse produto vendido nesse dia.
                Assim, cada vendedor passa entre 0 e 5 notas de vendas por dia. Considere que as informações de todas
                as notas passadas no mês anterior estejam disponíveis. Escreva um programa que leia todas as
                informações das vendas do mês passado e resuma o total de vendas por vendedor por produto. Todos os
                totais devem ser armazenados em um array com subscrito duplo sales. Depois de processar todas as
                informações do mês passado, imprima os resultados em formato tabular, com cada uma das colunas
                representando um vendedor em particular, e cada uma das linhas representando um produto em particular.
                Calcule o total de cada linha para obter o total de vendas de cada produto no mês passado; cruze os
                resultados obtidos com os de cada coluna para obter o total de vendas por vendedor no mês passado.
                Seu relatório tabular deverá incluir os totais à direita das linhas e no final das colunas.
Date:           11/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define VENDEDOR 5 // numero de vendedores + 1
#define PRODUTO 6 // numero de produtos + 1

int main( void )
{
    int sales[PRODUTO + 1][VENDEDOR + 1] = { 0 }; //incluindo os TOTAIS
    int nVendedor, nNotas, nProduto;
    int i, j;
    printf( "*****************Registro de Vendas*****************\n" );
    printf( "Digite o NUMERO DO VENDEDOR [ -1 para terminar ]: " );
    scanf( "%d", &nVendedor );

    while( nVendedor > 0 && nVendedor < VENDEDOR ){
        printf( "Digite a QUANTIDADE DE NOTAS: " );
        scanf( "%d", &nNotas );
        
        for( i = 1; i <= nNotas; i++ ){
            printf( "Digite o NUMERO DO PRODUTO (1 a 5): " );
            scanf( "%d", &nProduto );

            ++sales[nProduto][nVendedor];
            ++sales[nProduto][VENDEDOR];
            ++sales[PRODUTO][nVendedor];
            ++sales[PRODUTO][VENDEDOR];

            if( i < nNotas )
                printf( "Faltam %d\n", nNotas - i );
        }
        
        printf( "\n*****************Registro de Vendas*****************\n" );
        printf( "Digite o NUMERO DO VENDEDOR [ -1 para terminar ]: ");
        scanf( "%d", &nVendedor );
    }

    printf( "\n         " );
    for( i = 1; i < VENDEDOR; i++ ){
        printf( "%10s %d", "Vendedor", i );
    }
    printf( "%12s\n", "TOTAL" );

    for( i = 1; i < PRODUTO; i++ ){
        printf( "Produto %d", i );

        for( j = 1; j <= VENDEDOR; j++ ){
            printf( "%12d", sales[i][j] );
        }
        printf( "\n" );
    }

    printf( "%-9s", "TOTAL" );

    for( j = 1; j <= VENDEDOR; j++ ){
            printf( "%12d", sales[PRODUTO][j] );
        }
    printf( "\n" );

    return 0;
}

