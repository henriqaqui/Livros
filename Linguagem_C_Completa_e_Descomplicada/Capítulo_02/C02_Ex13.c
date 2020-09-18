/*
=======================================================================================================================
Filename:       C02_Ex13.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                13 Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas.
                Assim, se o caractere lido for a letra A, deverá ser impresso "A".
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){
    char caractere;

    scanf("%c", &caractere);
    printf("\"%c\"\n", caractere);

    return 0;
}
