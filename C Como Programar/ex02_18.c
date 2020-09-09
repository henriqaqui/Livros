/*
C: COMO PROGRAMAR - EDIÇÃO 6
Comparando inteiros. Escreva um programa que peça ao usuário que digite dois inteiros, obtenha os números
e depois imprima o maior número seguido das palavras 'é maior'. Se os números forem iguais, imprima a mensagem
'Esses números são iguais'. Use apenas a forma de seleção única da instrução if que você aprendeu neste capítulo.
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
