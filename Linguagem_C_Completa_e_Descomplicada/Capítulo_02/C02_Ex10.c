/*
=======================================================================================================================
Filename:       C02_Ex10.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                10 Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros).
                Em seguida, imprima os valores lidos separados por uma barra (\).
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){
    int dia, mes, ano;

    printf("Digite uma data.\nDia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    printf("%d\\%d\\%d\n", dia, mes, ano);

    return 0;
}
