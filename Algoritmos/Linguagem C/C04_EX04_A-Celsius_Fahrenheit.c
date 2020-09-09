/*
DESCRIÇÃO: Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
A fórmula de conversãoé F = C*9/5+32.
*/

#include <stdio.h>

int main(){
    double celsius, fahrenheit;

    scanf("%lf", &celsius);

    fahrenheit = celsius * 9/5 + 32;
    
    printf("%.1lf", fahrenheit);

    return 0;
}
