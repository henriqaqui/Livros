/*
=======================================================================================================================
Filename:       C03_Ex18.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.18 Calculadora de limite de crédito. Desenvolva um programa em C que determine se um cliente de uma
                loja de departamento excedeu seu limite de crédito. Os seguintes fatos estão disponíveis para cada
                cliente:
                    a) Número de conta.
                    b) Saldo no início do mês.
                    c) Total de todos os encargos desse cliente nesse mês.
                    d) Total de todos os créditos aplicados à conta desse cliente nesse mês.
                    e) Limite de crédito autorizado.
                O programa deverá ler cada um desse fatos, calcular o novo saldo (=saldo inicial + encargos - créditos)
                e determinar se o novo saldo é superior ao limite de crédito do cliente. Para os clientes cujo limite
                de crédito foi ultrapassado, o programa deverá exibir o número de conta do cliente, o limite de
                crédito, o novo saldo e a mensagem 'Limite de crédito ultrapassado'.
Date:           16/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int conta;
    float saldo, encargos, creditos, limiteCredito;

    printf( "Informe o numero da conta: " );
    scanf( "%d", &conta );

    while( -1 != conta){
        printf( "Informe o saldo inicial: " );
        scanf( "%f", &saldo );
        printf( "Informe o total de encargos: " );
        scanf( "%f", &encargos );
        printf( "Informe o total de creditos: " );
        scanf( "%f", &creditos );
        printf( "Informe o limite de creditos: " );
        scanf( "%f", &limiteCredito );

        saldo += encargos - creditos;

        if(saldo > limiteCredito){
            printf( "Conta: %d\n", conta );
            printf( "Limite de credito: %.2f\n", limiteCredito );
            printf( "Saldo: %.2f\n", saldo );
            printf( "Limite de credito ultrapassado.\n\n" );
        }

        printf( "Informe o numero da conta: " );
        scanf( "%d", &conta );
    }
    
    return 0;
}
