#include <stdio.h>

int main(void){

   int banco,year;
   float ahorro,interes,total;

   printf ("Cual es su monto que ahorro\n");
   scanf("%f",&ahorro);
    if(ahorro > 0){
        printf("Por cuantos años\n");
        scanf("%d",&year);
        if (year < 1500){
            interes = (3 * year)/100; //Agregarle el interes 
            total = ahorro + interes;
            printf("Su saldo depues de %d años es de %2.f\n",year,total);
        }else{
            printf("Su saldo depues de %d años es de %2.f\n",year,ahorro);
        }
    }else {
        printf("Cantidad no valida");
    }
    return 0;
}