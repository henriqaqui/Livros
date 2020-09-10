/*
C: COMO PROGRAMAR - EDIÇÃO 6
2.20 Diâmetro, circunferência e área de um círculo. Escreva um programa que leia o raio de um círculo
e informe o diâmetro, a circunferência e a área do círculo. Utilize o valor constante 3,14159 para PI.
Realize cada um desses cálculos dentro das instruções printf e use o especificaador de conversão %f.
[Nota: neste capítulo, discutimos apenas constantes e variáveis inteiras. No capítulo 3 discutiremos os números
em ponto flutuante, ou seja, valores que podem ter pontos decimais.]
*/

#include <stdio.h>

int main( void )
{
    const float PI = 3.14159;

    float raio, diametro, circunferencia, area;

    printf( "Digite o raio do circulo: " );
    scanf( "%f", &raio );

    printf( "O diametro e %f\n", raio * 2 );
    printf( "A circunferencia e %f\n", 2 * PI * raio );
    printf( "A area e %f\n", PI * raio * raio ) ;
    
    return 0;
}