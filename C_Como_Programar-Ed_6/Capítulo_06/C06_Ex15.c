/*
=======================================================================================================================
Filename:       C06_Ex15.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.15 Eliminação de duplicatas. Use um array de subscrito único para resolver o problema a seguir.
                Leia 20 números, cada um entre 10 e 100, inclusive. À medida que cada número for lido, imprima-o
                apenas se ele não for uma duplicata de um número já lido. Considere a ‘pior das hipóteses’:
                os 20 números são diferentes. Use o menor array possível para resolver esse problema.
Date:           29/09/2020
=======================================================================================================================
*/

#include <stdio.h>

#define TAMANHO 20
#define VALOR_MINIMO 10
#define VALOR_MAXIMO 100

int main( void )
{
    int numero[TAMANHO] = { 0 };
    int i = 0; // índice do array numero
    int j; // índice do array numero que verifica repetição
    int duplicado = 0; // 0 não foi duplicado, 1 é duplicado

    for ( i = 0; i < TAMANHO; i++ ){
        do{
            printf( "Digite um inteiro entre 10 e 100 (%d/%d): ", i + 1, TAMANHO );
            scanf( "%d", &numero[i]);
        }while ( numero[i] < VALOR_MINIMO || numero[i] > VALOR_MAXIMO );
        
        for( j = 0; j < i; j++ ){
            if( numero[i] == numero[j] ){
                duplicado++;
                j = i;
            }                
        }
        
        if( duplicado == 0 || 0 == i ){
            printf( "%d\n", numero[i]);
        }

        duplicado = 0;
    }
    
    return 0;
}