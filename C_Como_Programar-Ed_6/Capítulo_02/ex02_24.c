/*
=======================================================================================================================
Filename:       ex02_24.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.24 Par ou ímpar. Escreva um programa que leia um inteiro, determine e imprima se ele é par ou ímpar.
                [Dica: use o operador módulo. Um número par é um múltiplo de dois. Qualque múltiplo de dois fera resto
                zero quando dividido por dois.]
Date:           10/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void)
{   
    int numero;

    printf("Entre com um numero inteiro:\n");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("O numero %d e PAR.\n", numero);
    }
    else{
        printf("O numero %d e IMPAR.\n", numero);
    }

    return 0;
}
