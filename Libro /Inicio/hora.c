/* Programa: La hora un segundo después */

//#include <conio.h>
#include <stdio.h>

int main(void){
    int h, m, s;

    printf( "\n   Introduzca horas: " );
    scanf( "%d", &h );
    printf( "\n   Introduzca minutos: " );
    scanf( "%d", &m );
    printf( "\n   Introduzca segundos: " );
    scanf( "%d", &s );

    if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
    {
        s++;
        if ( s == 60 )
        {
            s = 0;
            m++;
            if ( m == 60 )
            {
                m = 0;
                h++;
                if ( h == 24 )
                    h = 0;
            }
        }
        printf( "\n   Un segundo despu%cs la hora es: %d:%d:%d", 130, h, m, s );
    }
    else
        printf( "\n   ERROR: La hora es incorrecta.\n" );


    return 0;
}