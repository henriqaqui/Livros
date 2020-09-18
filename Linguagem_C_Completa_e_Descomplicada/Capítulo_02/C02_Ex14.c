/*
=======================================================================================================================
Filename:       C02_Ex14.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                14 Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha.
                Use um único comando printf() para isso.
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){
    char caractere1, caractere2, caractere3;

    scanf("%c %c %c", &caractere1, &caractere2, &caractere3);
    printf("%c\n%c\n%c\n", caractere1, caractere2, caractere3);

    return 0;
}
