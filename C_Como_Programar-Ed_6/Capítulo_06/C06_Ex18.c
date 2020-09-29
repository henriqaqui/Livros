/*
=======================================================================================================================
Filename:       C06_Ex18.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                6.18 O que o programa a seguir faz?
Date:           29/09/2020
=======================================================================================================================
*/

#include <stdio.h>
#define SIZE 10

void someFunction( const int b[], int startIndex, int size ); 

int main( void )
{
    int a[ SIZE ] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 }; 
    
    printf( "Resposta e:\n" );
    someFunction( a, 0, SIZE );
    printf( "\n" );

    return 0;
}


/* O que essa função faz? */
void someFunction( const int b[], int startIndex, int size )
{
   if ( startIndex < size ) {
      someFunction( b, startIndex + 1, size );
      printf( "%d  ", b[ startIndex ] );
   } 
} 
