/*
=======================================================================================================================
Filename:       C06_Ex23.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.23 Gráficos de tartaruga. A linguagem Logo, que é particularmente popular entre os usuários de
                computadores pessoais, tornou famoso o conceito de gráficos de tartaruga. Imagine uma tartaruga
                mecânica que caminhe pela sala sob o controle de um programa em C. A tartaruga segura uma caneta em uma
                de duas posições, para cima ou para baixo. Quando a caneta está para baixo, a tartaruga traça as formas
                enquanto se movimenta; quando a caneta está para cima, a tartaruga se movimenta livremente, sem
                escrever nada. Neste problema, você simulará a operação da tartaruga e também criará um bloco de
                rascunho computadorizado.
                Use um array de 50 por 50 floor que seja inicializado em zeros. Leia comandos de um array em que eles
                estejam contidos. Registre a posição atual da tartaruga o tempo todo, e se a caneta está para cima ou
                para baixo. Suponha que a tartaruga sempre comece na posição 0,0 do piso com sua caneta para cima.
                Enquanto a tartaruga se mover com a caneta para baixo, defina os elementos apropriados do array floor
                como 1. Quando o comando 6 (imprimir) for dado, onde houver um 1 no array, mostre um asterisco ou
                algum outro caractere à sua escolha. Sempre que houver um zero, mostre um espaço em branco. Escreva
                um programa que implemente as capacidades dos gráficos de tartaruga discutidas aqui. Escreva vários
                programas de gráficos de tartaruga para desenhar formas interessantes. Acrescente outros comandos
                para aumentar o poder de sua linguagem de gráficos de tartaruga.
Date:           12/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define TAMANHO 50
#define CIMA 0
#define BAIXO 1

void imprimeSala( int sala[][TAMANHO] );

int main( void )
{
    const int nulo = 0, direita = 1, esquerda = 2;
    int sala[TAMANHO][TAMANHO] = { 0 };
    int linhaAtual = 0, colunaAtual = 0;
    int posicaoCaneta = CIMA;
    int comando, movimento, direcao = direita;
    int linha, coluna;

    printf( "Digite um comando (9 para terminar): ");
    scanf( "%d", &comando );
    
    while( comando != 9 ){

        switch( comando ){
            case 1:
                posicaoCaneta = CIMA;
                break;

            case 2:
                posicaoCaneta = BAIXO;
                break;
            
            case 3:

                break;

            case 4:

            case 5:
                printf("Digite quantas casas deseja andar: ");
                scanf( "%d", &movimento );


                break;

            case 6:
                imprimeSala( sala );
                break;

            case 9:
            break;


        }

        printf( "Digite um comando (9 para terminar): ");
        scanf( "%d", &comando );
    }



    return 0;
}


void imprimeSala( int sala[][TAMANHO] )
{
    int i, j;

    for( i = 0; i < TAMANHO; i++ ){
        for( j = 0; j < TAMANHO; j++ ){
            printf( "%c", sala[i][j] ? '*' : ' ' );
        }

        printf( "\n" );
    }
}

