/*
=======================================================================================================================
Filename:       ex02_19.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.19 Aritmética, maior e menor valor. Escreva um programa que leia três inteiros diferentes do teclado,
                depois apresente a soma, a média, o produto, o menor e o maior desses números.
                Use apenas a forma de seleção única da instrução if que você aprendeu neste capítulo.
                O diálogo na tela deverá aparecer da seguinte forma:
                    Digite três inteiros diferentes: 13 27 14
                    A soma é 54
                    A média é 18
                    O produto é 4914
                    O menor é 13
                    O maior é 27
Date:           09/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){

    int num1, num2, num3;
    int soma, media, produto;
    int maior, menor;

    printf("Digite tres numeros inteiros diferentes: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    soma = num1 + num2 + num3;
    media = soma / 3;
    produto = num1 * num2 * num3;

    maior = num1;
    menor = num1;

    if(num2 > maior){
        maior = num2;
    }

    if(num3 > maior){
        maior = num3;
    }

    if(num2 < menor){
        menor = num2;
    }

    if(num3 < menor){
        menor = num3;
    }

    printf("A soma e %d\nA media e %d\nO produto e %d\nO menor e %d\nO maior e %d\n",
        soma, media, produto, menor, maior);

    return 0;
}
