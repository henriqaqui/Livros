/*
=======================================================================================================================
Filename:       ex02_26.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.26 Múltiplos. Escreva um programa que leia dois inteiros, determine e imprima se o primeiro for
                um múltiplo do segundo. [Dica: use o operador módulo.]
Date:           10/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Entre com dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if(num1 % num2 == 0)
        printf("%d e multiplo de %d\n", num1, num2);
    else
        printf("%d nao e multiplo de %d\n", num1, num2);
    
    return 0;
}