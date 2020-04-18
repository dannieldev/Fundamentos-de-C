#include <stdio.h>
#include <stdlib.h>
int main(void){
    //Realizar un programa y que mencione si un numero ingresado por el usuario
    int num, aleat,arr[10];
    int bandera = 0;     

    //almacenar en el arreglo
    for (int i = 0; i < 10; i++){
        aleat = rand() % 11;
        arr[i] = aleat;
         printf("%d\n", arr[i]);
    }

    printf("Que numero Buscas\n"); 
    scanf("%d", &num);

    //mostrar el arreglo
    for (int i = 0; i < 10; i++){
       if(num == arr[i]){
         bandera = 1;         
        }   
    } 
    if(bandera == 1){
        printf("El Numero si esta\n");
    }else{
        printf("El Numero no esta\n");
    }

    
 return 0;
}
