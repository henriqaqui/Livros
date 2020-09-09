/*
2.16 
*/

#include <stdio.h>

int main(void){
    int num1, num2;
    int soma, produto, diferenca, quociente, modulo;

    printf("Este programa solicita dois numeros inteiros\ne apresenta na saida a SOMA, PRODUTO, DIFERENCA, QUOCIENTE e MODULO.\n\n");
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    produto = num1 * num2;
    diferenca = num1 - num2;
    quociente = num1 / num2;
    modulo = num1 % num2;

    printf("%d + %d = %d\n", num1, num2, soma);
    printf("%d * %d = %d\n", num1, num2, produto);
    printf("%d - %d = %d\n", num1, num2, diferenca);
    printf("%d / %d = %d\n", num1, num2, quociente);
    printf("%d %% %d = %d\n", num1, num2, modulo);

    return 0;
}
