/*
=======================================================================================================================
Filename:       C02_Ex15.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                15 Escreva um programa que leia três variáveis: char, int, float. Em seguida, imprima-as de três
                maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha.
                Use um único comando printf() para cada operação de escrita das três variáveis.
Date:           11/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){
    char caractere;
    int inteiro;
    float flutuante;

    scanf("%c %d %f", &caractere, &inteiro, &flutuante);

    printf("%c %d %f\n", caractere, inteiro, flutuante);
    printf("%c\t%d\t%f\n", caractere, inteiro, flutuante);
    printf("%c\n%d\n%f\n", caractere, inteiro, flutuante);
    
    return 0;
}
