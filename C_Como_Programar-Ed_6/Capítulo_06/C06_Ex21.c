/*
=======================================================================================================================
Filename:       C06_Ex21.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.21 Sistema de reservas de passagens aéreas. Você escreverá um programa que atribuirá assentos em cada
                voo do único avião da companhia (capacidade: 10 assentos). Seu programa deverá exibir o seguinte menu
                de alternativas: 
                    Favor digitar 1 para “primeira classe”
                    Favor digitar 2 para “econômica”
                Se a pessoa digitar 1, então seu programa deverá designar um assento na primeira classe
                (assentos de 1 a 5). Se a pessoa digitar 2, então seu programa deverá designar um assento na classe
                econômica (assentos 6 a 10). Seu programa deverá, então, imprimir um bilhete de embarque que indique o
                número do assento da pessoa e a seção a que esse assento pertence, primeira classe ou classe econômica.
                Use um array de subscrito único para representar o quadro de assentos do avião. Inicialize todos os
                elementosdo array em 0 para indicar que todos os assentos estão vazios. À medida que cada assento é
                designado, defina o elemento correspondente do array como 1, para indicar que o assento não está mais
                disponível. Seu programa, naturalmente, nunca deverá designar um assento que já foi reservado a outra
                pessoa. Quando a primeira classe estiver cheia, seu programa deverá perguntar à pessoa se ela aceita
                ser colocada na classe econômica (e vice-versa). Se a resposta for sim, faça a designação de assentos
                apropriada. Se a resposta for não, imprima a mensagem “O próximo voo sairá em 3 horas.”
Date:           10/10/2020
=======================================================================================================================
*/

#include <stdio.h>

#define LUGARES 10
#define TRUE 1
#define FALSE 0

int verificaPrimeiraClasse( int ass[] );
int verificaClasseEconomica( int ass[] );
void reservaVaga( int ass[], int classe );


int main( void )
{
    int assento[LUGARES] = { 0 };
    int escolha;
    int vaga = TRUE, vagaPrimeiraClasse = TRUE, vagaClasseEconomica = TRUE;

    do{
        if( vagaPrimeiraClasse && vagaClasseEconomica ){
            do{
                printf( "Favor digitar:\n1 para \"primeira classe\" OU\n2 para \"classe economica\"\n" );
                scanf( "%d", &escolha );
            }while( escolha > 2 || escolha < 1 );

        }
        else if( vagaPrimeiraClasse ){
            do{
                printf( "Temos vagas apenas na ""primeira classe""\nDigite 1 para aceitar ou 0 para recusar:\n" );
                scanf( "%d", &escolha );
            }while( escolha != 1 && escolha != 0 );
           
        }
        else{
            do{
                printf( "Temos vagas apenas na ""classe economica""\nDigite 2 para aceitar ou 0 para recusar:\n" );
                scanf( "%d", &escolha );
            }while( escolha != 2 && escolha != 0 );   
        }


        if( escolha > 0 ){
            reservaVaga( assento, escolha );
        }
        else{
            printf( "O proximo voo saira em 3 horas.\n\n" );
        }

        vagaPrimeiraClasse = verificaPrimeiraClasse( assento );
        vagaClasseEconomica = verificaClasseEconomica( assento );

        if( vagaPrimeiraClasse == FALSE && vagaClasseEconomica == FALSE ){
            vaga = FALSE;
        }

    }while( vaga );

    return 0;
}


int verificaPrimeiraClasse( int ass[] )
{
    const LUGAR = 5;
    int i;

    for( i = 0; i < LUGAR; i++ ){
        if( ass[i] == 0){
            return 1;
        }
    }
    return 0;
}

int verificaClasseEconomica( int ass[] )
{
    const LUGAR = 10;
    int i;

    for( i = 5; i < LUGAR; i++ ){
        if( ass[i] == 0){
            return 1;
        }
    }
    return 0;
}

void reservaVaga( int ass[], int classe )
{
    int assentoMaximo;
    int i;

    if(classe == 1 ){
        assentoMaximo = 5;
        for( i = 0; i < assentoMaximo; i++ ){
            if( ass[i] == 0){
                ++ass[i];
                break;
            }
        }
    }
    else{
        assentoMaximo = 10;
        for( i = 5; i < assentoMaximo; i++ ){
            if( ass[i] == 0){
                ++ass[i];
                break;
            }
        }
    }

    printf( "\n***Bilhete de Embarque***\n" "%s\n" "Assento %02d\n" "*************************\n\n",
                classe == 1 ? "PRIMEIRA CLASSE" : "CLASSE ECONOMICA", i + 1 );
}
