#include <stdio.h>
//Un día tiene 24 horas  y las horas tienen 60 minutos,
//los minutos a su vez tienen 60 segundos
// 24x60x60 = 86400
int main(void){
    int dias; 
    float segundos;
    

    printf("Ingresa un numero de dias \n");
    printf("Para saber cuantos segundos tiene\n");
    scanf("%d",&dias);

    if (dias !=0 & dias > 0)
    {
       segundos = dias*86400;
       printf ("%d Dias tiene %.1f segundos \n",dias,segundos);
    }else
    {
      printf ("Hoy no es tu dia\n");
    }
    
    return 0;
}