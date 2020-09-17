/*
=======================================================================================================================
Filename:       C03_Ex27.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.27 Ache os dois maiores números. Usando uma técnica semelhante à do Exercício 3.24, ache os dois
                maiores valores dos 10 números. [Nota: você poderá informar cada número apenas uma vez.]
Date:           17/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{   
    int numero, maior, segundoMaior;
    int contador = 1;

    /*Salvar o primeiro maior número. Garantir que não vai estar com lixo de memmória.
    Também não iniciei com maior=0 e fiz apenas o while porque ao entrar inteiros negativos causaria um erro lógico.*/
    printf( "Digite dez numeros inteiros (%d/10): ", contador );
    scanf( "%d", &numero );

    maior = numero;
    contador++;

    /*Salvar o segundo maior número*/
    printf( "Digite dez numeros inteiros (%d/10): ", contador );
    scanf( "%d", &numero );

    if( numero > maior ){
        segundoMaior = maior;
        maior = numero;
    }
    else{
        segundoMaior = numero;
    }

    contador++;
    

    /*Inicio das demais comparações*/
    while(contador <= 10){
        printf( "Digite dez numeros inteiros (%d/10): ", contador );
        scanf( "%d", &numero );

        if( numero > maior ){
            segundoMaior = maior;
            maior = numero;
        }
        else if (numero > segundoMaior){
            segundoMaior = numero;
        }

        contador++;
    }

    printf( "O maior numero e: %d\n", maior );
    printf( "O segundo maior numero e: %d\n", segundoMaior );

    return 0;
}
