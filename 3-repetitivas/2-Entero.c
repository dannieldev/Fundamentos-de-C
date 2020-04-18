#include <stdio.h>
#include <math.h>

int main(void){
    int i, enteros, fraccion,scaf;
    float numero;

    enteros = 0;
    fraccion = 0;
    printf( "Introduzca 10 numeros entero o numeros decimales\n");
    for ( i = 1 ; i < 11 ; i++ ){
        scanf("%f", &numero);
        scaf = numero / numero;
        printf("%d",scaf);
        if ( scaf == 1 ){
            enteros++;
        }else{
            fraccion++;
        }
    }

    printf( "Ha introducido %d numeros par y %d impar.\n", enteros, fraccion );

    return 0;
}