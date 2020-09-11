/*
=======================================================================================================================
Filename:       ex02_30.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.30 Separando dígitos em um inteiro. Escreva um programa que leia um número de cinco dígitos,
                separe o número em dígitos individuais e imprima os dígitos separados um do outro por três espaços
                cada um. [Dica: use combinações da divisão inteira e da operação módulo.] Por exemplo, se o usuário digitar 42139, o program deverá exibir:
                    4   2   1   3   9     
Date:           10/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void)
{
    int numero;
    int dezenaMilhar, milhar, centena, dezena, unidade;

    scanf("%d", &numero);

    dezenaMilhar = numero / 10000;
    numero %= 10000;
    milhar = numero / 1000;
    numero %= 1000;
    centena = numero / 100;
    numero %= 100;
    dezena = numero / 10;
    unidade = numero % 10;
    
    printf("%d   %d   %d   %d   %d\n", dezenaMilhar, milhar, centena, dezena, unidade);

    return 0;
}
