/*
=======================================================================================================================
Filename:       C03_Ex05.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                5 Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
Date:           15/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int idade, anoAtual, anoNascimento;

    scanf( "%d %d", &idade, &anoAtual );

    anoNascimento = anoAtual - idade;

    printf( "%d\n", anoNascimento );

    return 0;
}
