/*
=======================================================================================================================
Filename:       ex02_18.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.18 Comparando inteiros. Escreva um programa que peça ao usuário que digite dois inteiros,
                obtenha os números e depois imprima o maior número seguido das palavras 'é maior'.
                Se os números forem iguais, imprima a mensagem 'Esses números são iguais'.
                Use apenas a forma de seleção única da instrução if que você aprendeu neste capítulo.
Date:           09/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main(void){
    int num1, num2;

    printf("Digite dois numeros inteiros:\n");

    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        printf("%d e maior\n", num1);
    }
    
    if(num1 < num2){
        printf("%d e maior\n", num2);
    }

    if(num1 == num2){
        printf("Esses numeros sao iguais\n");
    }
    
    return 0;
}
