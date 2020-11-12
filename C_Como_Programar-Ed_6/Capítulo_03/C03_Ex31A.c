/*
=======================================================================================================================
Filename:       C03_Ex31.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                3.31 Problema do else pendurado. Determine a saída para cada um dos seguintes códigos quando x for 9
                e y for 11, e quando x for 11 e y for 9. O compilador ignora o recuo em um programa em C. Além disso,
                o compilador sempre associa um else com o if anterior, a menos que seja informado de que deve proceder
                de outra forma pela colocação das chaves { }. Visto que, à primeira vista, você pode não saber ao certo
                a que if um else corresponde, isso é conhecido como o problema do ‘else pendurado’. Eliminamos o recuo
                do código a seguir para tornar o problema mais desafiador. [Dica: aplique as convenções de recuo que
                você aprendeu.]
                    a)  if ( x < 10 )
                        if ( y > 10 )
                        printf( “*****\n” );
                        else
                        printf( “#####\n” );
                        printf( “$$$$$\n” );
Date:           11/11/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    int i;
    int x = 9, y = 11;

    for( i = 0; i < 2; i++ ){
        printf( "x = %d\ny = %d\n", x, y );

        if ( x < 10 )
            if ( y > 10 )
                printf( "*****\n" );
            else
                printf( "#####\n" );
            
        printf( "$$$$$\n\n" );

        x += 2;
        y -= 2;
    }
    
    return 0; 
}
