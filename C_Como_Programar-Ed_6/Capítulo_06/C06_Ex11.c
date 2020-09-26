/*
=======================================================================================================================
Filename:       C06_Ex11.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.11 Bubble sort. O bubble sort apresentado na Figura 6.15 é ineficaz no caso de arrays grandes.
                Faça as modificações simples descritas a seguir para melhorar o desempenho do bubble sort.
                    a) Após a primeira passada, o maior número estará certamente no elemento de número mais alto do
                    array; após a segunda passada, os dois maiores números estarão ‘no lugar’ e assim por diante.
                    Em vez de nove comparações em cada passada, modifique o bubble sort para que sejam feitas oito
                    comparações na segunda passada, sete na terceira e assim por diante.
                    b) Os dados no array talvez já estejam na ordem correta, ou na ordem quase correta, portanto,
                    por que fazer nove passadas se menos que isso já seria suficiente? Modifique a ordenação para
                    verificar, ao final de cada passada, se alguma troca foi feita. Se nenhuma troca tiver sido feita,
                    então os dados já deverão estar na ordem certa, de modo que o programa deverá ser concluído.
                    Se foram feitas trocas, então, pelo menos mais uma passada será necessária.
Date:           25/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#define SIZE 10

int main( void ) 
{   
   int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 }; 
   int pass; 
   int i;
   int hold;
   int trocas; /*vai verificar se houve alguma troca durante as passadas*/
   
   printf( "Data items in original order\n" );
   
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   }
   printf( "\n\n" );

   for ( pass = 1; pass < SIZE; pass++ ) { 
      trocas = 0;
      
      for ( i = 0; i < SIZE - pass; i++ ) {      
         if ( a[ i ] > a[ i + 1 ] ) {  
            hold = a[ i ];                   
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
            trocas++;
         }
      } 

      /*Imprime cada uma das passadas*/
      printf( "Data items %d pass\n", pass );
      for ( i = 0; i < SIZE; i++ ) {
         printf( "%4d", a[ i ] );
      }
      printf( "\n" );

      /*se durante a passada não houve trocas, significa que a sequencia já está em ordem crescente*/
      if( 0 == trocas ){
         pass = SIZE;
      }
   } 

   printf( "\nData items in ascending order\n" );

   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   }

   printf( "\n" );
   return 0;
}
