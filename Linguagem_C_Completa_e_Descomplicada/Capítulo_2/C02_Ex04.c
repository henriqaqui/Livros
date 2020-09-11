/*
=======================================================================================================================
Filename:       C02_Ex04.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                4 Faça um programa que leia um número inteiro e depois imprima usando o operador "%f".
                Veja o que aconteceu.
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);
    printf("%f\n", numero);

    return 0;
}
