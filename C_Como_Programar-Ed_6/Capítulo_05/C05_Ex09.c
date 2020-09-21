/*
=======================================================================================================================
Filename:       C05_Ex09.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                5.9 Tarifa de estacionamento. Um estacionamento cobra uma tarifa mínima de R$ 2,00 por uma permanência
                de até três horas, e R$ 0,50 adicionais por hora para cada hora, ou parte dela, por até três horas.
                A tarifa máxima para qualquer período de 24 horas é de R$ 10,00. Suponha que nenhum carro estacione
                por mais de 24 horas de cada vez. Escreva um programa que calcule e imprima as tarifas de
                estacionamento para cada um dos três clientes que utilizaram esse estacionamento ontem. Você deverá
                informar as horas de permanência de cada cliente. Seu programa deverá imprimir os resuldados em um
                formato tabular e deverá calcular e imprimir o total recebido ontem. O programa deverá usar a função
                calcularTaxas para determinar o valor devido por cliente.
Date:           21/09/2020
=======================================================================================================================
*/

#include <stdio.h>

float calcularTaxas( float hs );

int main( void )
{
    float horasCar1, horasCar2, horasCar3, horasTotal;
    float taxaCar1, taxaCar2, taxaCar3, taxasTotais;

    scanf( "%f %f %f", &horasCar1, &horasCar2, &horasCar3 );

    horasTotal = horasCar1 + horasCar2 + horasCar3;
    
    taxaCar1 = calcularTaxas( horasCar1 );
    taxaCar2 = calcularTaxas( horasCar2 );
    taxaCar3 = calcularTaxas( horasCar3 );
    taxasTotais = taxaCar1 + taxaCar2 + taxaCar3;
    
    printf( "Carro\tHoras\tTaxa\n");

    printf ( "%d\t%.1f\t%.2f\n", 1, horasCar1, taxaCar1 );
    printf ( "%d\t%.1f\t%.2f\n", 2, horasCar2, taxaCar2 );
    printf ( "%d\t%.1f\t%.2f\n", 3, horasCar3, taxaCar3 );
    printf ( "TOTAL\t%.1f\t%.2f\n", horasTotal, taxasTotais );

    return 0; 
}


float calcularTaxas( float hs )
{
    const float TARIFA_MINIMA = 2.0, TARIFA_MAXIMA = 10.0, TARIFA_HORA = 0.5;
    const int TEMPO_TARIFA_MINIMA = 180, TEMPO_TARIFA_MAXIMA = 1140;
    float valor;

    hs *= 60; //para não comparar valores com ponto flutuante.

    if( (int)hs <= TEMPO_TARIFA_MINIMA ){
        valor = TARIFA_MINIMA;
    }
    else if( (int)hs <= TEMPO_TARIFA_MAXIMA ){
        valor = TARIFA_MINIMA + ((hs - TEMPO_TARIFA_MINIMA) / 60) * TARIFA_HORA;
    }
    else{
        valor = TARIFA_MAXIMA;
    }

    return valor;
}
