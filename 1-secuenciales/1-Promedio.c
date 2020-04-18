#include <stdio.h>

int main(void){

       
    int nota,cantidad,cnotas;
    float promedio,tpromedio,nponde; 

    printf("Ingresa cantidad de notas: \n"); 
     scanf("%d", &cnotas);
    
    for (int i = 0; i < cnotas; i++){
        printf("Ingresa nota: ");
        scanf("%d",&nota);
        if (nota <= 0 & nota > 10){
            printf("Tiene que ser mayor a cero y menor a 10 \n");
            i= i-1;
        }else{
            printf("Cual la ponderacion de la nota: ");
            scanf("%f",&nponde);
            nponde = nponde*0.1;
            printf("Promedio clac %f\n", nponde);   
            promedio = nota*nponde;
            tpromedio = promedio + tpromedio;
            printf("Promedio suma %f\n", tpromedio); 
        }
    }

    printf("Promedio total %f\n", tpromedio);   
    printf("Promedio %f\n", tpromedio);   
    return 0;
}
