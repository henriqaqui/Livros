/*
=======================================================================================================================
Filename:       C03_Ex28.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.28 Valide a entrada do usuário. Modifique o programa da Figura 3.10 para validar suas entradas.
                Em qualquer entrada, se o valor inserido for diferente de 1 ou 2, continue o looping até que o
                usuário informe um valor correto.
Date:           18/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int passes = 0;
    int failures = 0;
    int student = 1;
    int result; 
    
    while( student <= 10 ){
        printf( "Enter result ( 1=pass,2=fail ): " );
        scanf( "%d", &result );
        
        while( result != 1 && result != 2 ){   /*Usar o do-while para validar essas entradas fica melhor*/
            printf( "Enter result ( 1=pass,2=fail ): " );
            scanf( "%d", &result );
        }
        
        if( result == 1 ){     
         passes = passes + 1;
        } 
        else{
            failures = failures + 1;
        }
        
        student = student + 1;
    } 
  
    printf( "Passed %d\n", passes );
    printf( "Failed %d\n", failures );

    if( passes > 8 ){
        printf( "Bonus to instructor!\n" );
    }
    
    return 0; 
}
