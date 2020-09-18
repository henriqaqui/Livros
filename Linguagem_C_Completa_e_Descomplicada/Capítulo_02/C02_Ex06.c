/*
=======================================================================================================================
Filename:       C02_Ex06.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                6 Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){
    double numero;

    scanf("%lf", &numero);
    printf("%e\n", numero);

    return 0;
}
