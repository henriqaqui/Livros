/*
=======================================================================================================================
Filename:       ex02_27.c
Author:         Henrique Rodrigues
Description:    C: COMO PROGRAMAR - 6ª EDIÇÃO - PORTUGUÊS
                2.27 Padrão de asteríscos alternados. Apresente o seguinte padrão de asteríscos alternados com oito
                instruções printf, e depois apresente o mesmo padrão com o mínimo de instruções printf possível.
Date:           10/09/2020
=======================================================================================================================
*/

#include <stdio.h>

int main( void )
{
    printf( "* * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "* * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "* * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "* * * * * * * *\n" );
    printf( " * * * * * * * *\n\n" );
    
    printf( "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n"
        "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n" );
    return 0;
}
