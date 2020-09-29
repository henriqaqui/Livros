/*
=======================================================================================================================
Filename:       C06_Ex14.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.14 Modificações nos programas de média, mediana e moda. Modifique o programa da Figura 6.16 de modo
                que a função mode seja capaz de lidar com um empate para o valor de moda. Modifique também a função
                median para que os dois elementos do meio de um array tenham a média calculada caso haja um número par
                de elementos.
Date:           26/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#define SIZE 99

void mean( const int answer[] );
void median( int answer[] );
void mode( int freq[], const int answer[] ) ;
void bubbleSort( int a[] );
void printArray( const int a[] );

int main( void )
{
   int frequency[ 10 ] = { 0 }; 

   /*int response[ SIZE ] =             
      { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
        7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
        6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
        7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
        6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
        7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
        5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
        7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
        7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
        4, 5, 6, 1, 6, 5, 7, 8, 7 }; */

   /* teste para não há moda */
   /*int response[ SIZE ] =             
      { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
        6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
        8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
        9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
        1, 2, 3, 4, 5, 6, 7, 8, 9 }; */
   
   /* teste para máximo de modas possíveis */
   /*int response[ SIZE ] =             
      { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
        6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
        7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
        8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
        1, 2, 3, 4, 5, 6, 7, 8, 9, 9,
        1, 2, 3, 4, 5, 6, 7, 8, 9 }; */

   /* teste para mais de uma moda */
   int response[ SIZE ] =             
      { 6, 7, 3, 9, 3, 7, 8, 9, 3, 9,
        7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
        6, 7, 8, 9, 3, 9, 3, 7, 3, 7,
        7, 3, 9, 3, 9, 8, 9, 7, 1, 9,
        6, 1, 3, 7, 1, 1, 9, 3, 9, 2,
        7, 3, 9, 8, 9, 8, 9, 3, 5, 3,
        5, 6, 7, 2, 5, 3, 9, 4, 6, 3,
        7, 3, 9, 6, 3, 7, 8, 9, 7, 3,
        7, 4, 4, 2, 5, 3, 1, 7, 5, 6,
        4, 5, 6, 1, 6, 5, 1, 8, 7 };

   mean( response );
   median( response );
   mode( frequency, response );
   return 0; 
} 


void mean( const int answer[] )
{
   int j;
   int total = 0;

   printf( "%s\n%s\n%s\n", "********", "  Mean", "********" );

   for ( j = 0; j < SIZE; j++ ) {
      total += answer[ j ];
   } 

   printf( "The mean is the average value of the data\n"
           "items. The mean is equal to the total of\n"
           "all the data items divided by the number\n"
           "of data items ( %d ). The mean value for\n"
           "this run is: %d / %d = %.4f\n\n",
           SIZE, total, SIZE, (  double  ) total / SIZE );
}

/* ordena array e determina valor do elemento mediano */
void median( int answer[] )
{
   printf( "\n%s\n%s\n%s\n%s",
           "********", " Median", "********",
           "The unsorted array of responses is" );

   printArray( answer ); /* exibe array não ordenado */

   bubbleSort( answer ); /* ordena array */

   printf( "\n\nThe sorted array is" );
   printArray( answer ); /* exibe array ordenado */

   /* exibe elemento mediano*/
   if( SIZE % 2 == 0 ){   /* Muda a resposta caso SIZE seja par */
       printf( "\n\nA mediana e a media dos elementos %d e %d of\n"
               "the sorted %d element array.\n"
               "For this run the median is %.1f\n\n",
               SIZE / 2 - 1, SIZE / 2, SIZE, (answer[ SIZE / 2 ] + answer[ SIZE / 2 - 1 ]) / (float)2 );
   }
   else{
        printf( "\n\nThe median is element %d of\n"
               "the sorted %d element array.\n"
               "For this run the median is %d\n\n",
               SIZE / 2, SIZE, answer[ SIZE / 2 ] );
   }
} /* fim da função median */

/* determina a resposta mais frequente */
void mode( int freq[], const int answer[] )
{
   const int MAXIMO_MODA = 8; /* é a quantidade máxima de modas que podem existir neste problema*/
   const int I_PRIMEIRA_MODA = 1; /* índice do modeValue em que ficará salvo a primeira moda encontrada */
   
   int rating; /* contador para acessar os elementos 1- 9 do array freq */
   int j; /* contador para resumir os elementos 0 - 98 do array answer */
   int h; /* contador para exibir histogramas dos elementos no array freq */
   int largest = 0; /* representa maior frequencia */

   /* representa resposta mais frequente */
   /* transfomei em um array para que armazene, se necessário, todas as modas */
   int modeValue[ MAXIMO_MODA + 1 ];

   int contaModa = 0; /* contador de quantas modas contém */
   int ratingModeValue; /* contador para acessar os elementos de 1 a 8 do array modeValue no printf*/

   printf( "\n%s\n%s\n%s\n",
           "********", "  Mode", "********" );

   /* inicializa frequências em 0 */
   for ( rating = 1; rating <= 9; rating++ ) {
      freq[ rating ] = 0;
   } /* fim do for */

   /* frequência de resumo */
   for ( j = 0; j < SIZE; j++ ) {
      ++freq[ answer[ j ] ];
   } /* fim do for */

   /* cabeçalhos de impressão para colunas do resultado */
   printf( "%s%11s%19s\n\n%54s\n%54s\n\n",
           "Response", "Frequency", "Histogram",
           "1    1    2    2", "5    0    5    0    5" );

   /* exibe resultados */
   for ( rating = 1; rating <= 9; rating++ ) {
      printf( "%8d%11d          ", rating, freq[ rating ] );

      /* acompanha valor da moda e valor da maior frequência */
      if ( freq[ rating ] > largest ) {
         largest = freq[ rating ];
         modeValue[ I_PRIMEIRA_MODA ] = rating; 
      } /* fim do if */

      /* barra de histograma de saída de impressão que representa valor de frequência */
      for ( h = 1; h <= freq[ rating ]; h++ ) {
         printf( "*" );
      } /* fim do for interno */

      printf( "\n" );
   } /* fim do for externo */
   
   /* Verifica se há mais de uma moda e identifica quais são elas */
   for( rating = 1; rating <= 9; rating++ ){
       if ( freq[ modeValue[ I_PRIMEIRA_MODA ] ] == freq[ rating ] ){
           contaModa++;
           if( contaModa > 1  ){
               modeValue[ contaModa ] = rating;
           }
       }
   }

   /* exibe o valor da moda */
   if( contaModa > MAXIMO_MODA ){
       printf( "Nao ha moda. Todos os valores foram repetidos %d vezes.\n", largest );
   }
   else if( contaModa > 1 ){
        printf( "A moda e o valor mais frequente.\n"
           "Para essa execucao ha %d modas:\n", contaModa );
        for( ratingModeValue = 1 ; ratingModeValue <= contaModa; ratingModeValue++ ){
            printf( "%d\n", modeValue[ ratingModeValue ]);
        }
        printf( "Cada uma delas ocorreu %d vezes.\n", largest );    
   }
   else{
       printf( "The mode is the most frequent value.\n"
           "For this run the mode is %d which occurred"
           " %d times.\n", modeValue[ I_PRIMEIRA_MODA ], largest );
   }
} /* fim da função mode */

void bubbleSort( int a[] )
{
   int pass; 
   int j; 
   int hold; 

   for ( pass = 1; pass < SIZE; pass++ ) {

      for ( j = 0; j < SIZE - 1; j++ ) {

         if ( a[ j ] > a[ j + 1 ] ) {
            hold = a[ j ];
            a[ j ] = a[ j + 1 ];
            a[ j + 1 ] = hold;
         } 
      }
   } 
} 


void printArray( const int a[] )
{
   int j; 

   for ( j = 0; j < SIZE; j++ ) {

      if ( j % 20 == 0 ) { 
         printf( "\n" );
      }

      printf( "%2d", a[ j ] );
   } 
}
