/*
=======================================================================================================================
Filename:       C03_Ex01.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                1 Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);

    printf("%d\n%d\n", numero - 1, numero + 1);
    return 0;
}
