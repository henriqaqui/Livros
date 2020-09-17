/*
=======================================================================================================================
Filename:       C03_Ex21.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.21 Calculadora de salário. Desenvolva um programa que determine o salário semanal bruto de vários
                funcionários. A empresa paga 'uma hora normal' para cada funcionário pelas primeiras 40 horas
                trabalhadas, 'uma hora normal e meia' por hora trabalhada a partir de 40 horas. Você recebe uma lista
                de funcionários da empresa, o número de horas que cada funcionário trabalhou na semana anterior e o
                valor ganho por hora de cada funcionário. Seu programa deverá ler essas informações para cada 
                funcionário e determinar e exibir o salário que cada um deverá receber.
Date:           17/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    const int MAXIMO_HORA_NORMAL = 40;
    const float ADICIONAL_HORA_EXTRA = 1.5;

    float salarioHora, salarioSemanal;
    int horasTrabalhadas, horaExtra;

    printf( "Digite o numero de horas trabalhadas (-1 para terminar): " );
    scanf( "%d", &horasTrabalhadas );

    while( horasTrabalhadas != -1 ){
        printf( "Digite o salario por hora do funcionario: " );
        scanf( "%f", &salarioHora );

        if( horasTrabalhadas > MAXIMO_HORA_NORMAL){
            horaExtra = horasTrabalhadas - MAXIMO_HORA_NORMAL;
            salarioSemanal = ( MAXIMO_HORA_NORMAL*salarioHora ) + ( horaExtra*( salarioHora*ADICIONAL_HORA_EXTRA ) );
        }
        else{
            salarioSemanal = horasTrabalhadas * salarioHora;
        }

        printf( "Salario e de: R$%.2f\n\n", salarioSemanal);

        printf( "Digite o numero de horas trabalhadas (-1 para terminar): " );
        scanf( "%d", &horasTrabalhadas );
    }
    
    return 0;
}
