/*
=======================================================================================================================
Filename:       C04_Ex04.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                4 Faça um programa que leia o salário de um trabalhador e o valor da prestaçãp de um empréstimo.
                Se a prestação for maior que 20% do salário, imprima: "Empréstimo não concedido.". Caso contrário,
                imprima: "Empréstimo concedido.".
Date:           03/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define LIMITE .2

int main( void )
{
    float salario, prestacao;

    scanf( "%f %f", &salario, &prestacao);

    printf( "%s\n", prestacao > salario * LIMITE ? "Emprestimo nao concedido.\n" : "Emprestimo concedido.\n" );

    return 0;
}
