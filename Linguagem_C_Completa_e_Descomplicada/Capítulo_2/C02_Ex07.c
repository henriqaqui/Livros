/*
=======================================================================================================================
Filename:       C02_Ex07.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                7 Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){
    char caractere;

    scanf("%c", &caractere);
    printf("%d\n", caractere);

    return 0;
}
