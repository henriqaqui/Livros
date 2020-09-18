/*
=======================================================================================================================
Filename:       C02_Ex03.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                3 Escreva um programa que leia um número inteiro e depois imprima a mensagem "Valor lido: ", seguido do
                valor inteiro, Use apenas um comando printf().
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);
    printf("Valor lido: %d\n", numero);

    return 0;
}
