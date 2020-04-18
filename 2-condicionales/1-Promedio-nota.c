#include <stdio.h>

int main(void){
    float nota = 0;
    float promedio,suma;

    printf("Ingresa las notas: \n"); 

    for (int i = 0; i < 3; i++){
        scanf("%f", &nota);
        suma = nota + suma;
    }
    promedio = suma / 3;

    if (promedio > 9.5 & promedio <= 10)
    {
        printf("Excelente\n");
    }
     if (promedio > 8.5 & promedio <= 9.4)
    {
        printf("Muy bien\n");
    }
    if (promedio > 7.5 & promedio <= 8.4)
    {
        printf("Bien\n");
    }
    if (promedio < 7.6)
    {
        printf("Sigue mejorando\n");
    }
    
    return 0;
}
