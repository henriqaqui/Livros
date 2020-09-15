/*
=======================================================================================================================
Filename:       C02_Ex29.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.29 Valor inteiro de um caractere. Vamos dar um passo adiante. Neste capítulo, você aprendeu sobre 
                inteiros e o tipo int. C também pode representar letras maiúsculas e minúsculas e uma grande variedade
                de símbolos especiais. C usa inteiros pequenos internamente para representar diferentes caracteres.
                O conjunto de caracteres que um computador utiliza, juntamente com as representações de inteiros
                correspondentes a esses caracteres, é chamado de conjunto de caracteres desse computador. Você pode
                imprimir o equivalente da letra A maiúscula, por exemplo, executando a instrução: 

                    printf( "%d", 'A' );
                
                Escreva um programa em C que imprima os equivalentes inteiros de algumas letras maiúsculas, letras
                minúsculas, dígitos e símbolos especiais. No mínimo, determine os equivalentes inteiros de
                A B C a b c 0 1 2 $ * + / e o caractere espaço em branco.           
Date:           10/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    printf( "%d e o equivalente inteiro de A\n", 'A' );
    printf( "%d e o equivalente inteiro de B\n", 'B' );
    printf( "%d e o equivalente inteiro de C\n", 'C' );
    printf( "%d e o equivalente inteiro de a\n", 'a' );
    printf( "%d e o equivalente inteiro de b\n", 'b' );
    printf( "%d e o equivalente inteiro de c\n", 'c' );
    printf( "%d e o equivalente inteiro de 0\n", '0' );
    printf( "%d e o equivalente inteiro de 1\n", '1' );
    printf( "%d e o equivalente inteiro de 2\n", '2' );
    printf( "%d e o equivalente inteiro de $\n", '$' );
    printf( "%d e o equivalente inteiro de *\n", '*' );
    printf( "%d e o equivalente inteiro de +\n", '+' );
    printf( "%d e o equivalente inteiro de /\n", '/' );
    printf( "%d e o equivalente inteiro de espaco em branco\n", ' ' );

    return 0;
}
