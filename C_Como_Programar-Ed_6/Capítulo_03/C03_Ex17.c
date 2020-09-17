/*
=======================================================================================================================
Filename:       C03_Ex17.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.17 Consumo de gasolina. Os motoristas se preocupam com o consumo de gasolina de seus automóveis.
                Um motorista manteve um registro do número de abastecimento que fez, registrando também o número de
                quilômetros rodados e de litros obtidos a cada abastecimento. Desenvolva um programa que peça o número
                de quilômetros dirigidos e a quantidade de litros obtidos a cada abastecimento. O programa deverá
                calcular e exibir a quantidade de quilômetros rodados por litros usados. Depois de processar toda a
                informação, o programa deverá calcular e exibir o total combinado de quilômetros por litro para todos
                os abastecimentos.
Date:           15/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    float km, litros, kmLitro;
    float kmTotal = 0, litrosTotal = 0, kmLitroTotal = 0;

    printf( "Informe quantos km dirigiu (-1 para terminar):\n" );
    scanf( "%f", &km );

    while ( -1 != km ){
       printf( "Informe quantos litros abasteceu:\n" );
       scanf( "%f", &litros );

       kmLitro = km / litros;

       kmTotal += km;
       litrosTotal += litros;
       
       printf( "O consumo atual e de: %f km/l\n\n", kmLitro );

       printf( "Informe quantos km dirigiu (-1 para terminar):\n" );
       scanf( "%f", &km );
    }

    if( 0 != kmTotal ){
        kmLitroTotal = kmTotal / litrosTotal;
        printf( "O consumo geral foi de: %f km/l\n", kmLitroTotal );
    }
    
    return 0;
}
