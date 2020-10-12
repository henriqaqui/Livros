/*
=======================================================================================================================
Filename:       C05_Ex06.c
Author:         Henrique Rodrigues
Description:    LINGUAGEM C COMPLETA E DESCOMPLICADA - 2ª EDIÇÃO
                6 Faça um programa que mostre uma contagem regresiva na tela, iniciando em 10 e terminando em 0.
                Mostre uma mensagem "FIM!" após a contagem.
Date:           12/10/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int contagem;

    for( contagem = 10; 0 <= contagem; contagem-- ){
        printf( "%2d", contagem );
        _sleep( 1000 );
        system( "cls" );
    }

    printf( "FIM!\n" );

    return 0;
}
