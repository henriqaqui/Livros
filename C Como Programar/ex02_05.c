//Calcular o produto de três inteiros

#include <stdio.h>

int main(void){
    int x, y, z, resultado;

    printf("Digite o valor de tres numeros inteiros:\n");

    scanf("%d %d %d", &x, &y, &z);

    resultado = x * y * z;

    printf("O produto e %d\n", resultado);

    return 0;
}
