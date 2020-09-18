/*
=======================================================================================================================
Filename:       C02_Ex08.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                8 Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles
                foram lidos.
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("%d\n%d\n", num2, num1);

    return 0;
}
