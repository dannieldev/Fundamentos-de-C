#include <stdio.h>

int main(void){ 
    float inver,porsent,primei,seguni,tersei;
    float siver = 0;

    for (int i = 1; i < 4; i++){
        printf ("Iversion del %d ° inversor ",i);
        scanf ("%f",&inver);

        siver = inver + siver;
        
        if (i == 1){
            primei = inver;
        }if (i == 2){
            seguni = inver;
        }if (i == 3){
            tersei = inver;
        }
    }

    primei = (primei*100)/siver;
    seguni = (seguni*100)/siver;
    tersei = (tersei*100)/siver;
    printf("Inversion Total %.1f \n",siver);
    printf("El primer inversor tiene %.3f de porcentaje \n",primei);
    printf("El segundo inversor tiene %.3f de porcentaje \n",seguni);
    printf("El tercer inversor tiene %.3f de porcentaje \n",tersei);
    return 0;
}