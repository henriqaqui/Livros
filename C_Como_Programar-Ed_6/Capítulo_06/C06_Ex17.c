/*
=======================================================================================================================
Filename:       C06_Ex17.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.17 O que o programa a seguir faz?
Date:           29/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#define SIZE 10

int whatIsThis( const int b[], int p );

int main( void )
{
   int x;

   int a[ SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

   x = whatIsThis( a, SIZE );

   printf( "Resultador e %d\n", x );
   return 0;
}

/* o que essa função faz? */
int whatIsThis( const int b[], int p )
{
   /* caso básico */
   if ( p == 1 ) {
      return b[ 0 ];
   }
   else { /* etapa de recursão */ 
      return b[ p - 1 ] + whatIsThis( b, p - 1 );
   }
}
