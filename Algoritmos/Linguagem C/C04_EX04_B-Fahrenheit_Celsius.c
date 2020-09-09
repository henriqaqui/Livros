/*
DESCRIÇÃO: Ler uma temperatura em graus fahrenheit e apresentá-la convertida em graus celsius.
A fórmula de conversão é C = ((F-32)*5/9.
*/

#include <stdio.h>

int main(){
    double fahrenheit, celsius;

    scanf("%lf", &fahrenheit);

    celsius = ((fahrenheit - 32) * 5) / 9;
    
    printf("%.1lf", celsius);

    return 0;
}
