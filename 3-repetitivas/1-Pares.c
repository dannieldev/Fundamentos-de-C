#include <stdio.h>

int main(){
    int i, numero, entero, fracion;

    entero = 0;
    fracion = 0;
    printf( "Introduzca 10 numeros entero \n");
    for ( i = 1 ; i < 11 ; i++ )
    {
        scanf( "%d", &numero );

        if ( numero % 2 == 0 ){
             entero++;
        }else{
             fracion++;
        }
           
    }

    printf( "Ha introducido %d numeros enteros y %d fraccionarios.\n", entero, fracion );

    return 0;
}