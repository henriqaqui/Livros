/*
=======================================================================================================================
Filename:       C02_Ex09.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                9 Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso.
                Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){
    float num1, num2;

    scanf("%f %f", &num1, &num2);
    printf("%f\n%f\n", num2, num1);

    return 0;
}
