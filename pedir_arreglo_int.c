#include <stdio.h>

int main(void){
   
    int cant,n;
   
    printf("Cantidad de Numeros a ingresar\n"); 
    scanf("%d", &cant);

    int num[cant];

    //almacenar en el arreglo
    for (int i = 0; i < cant; i++){
        scanf("%d", &n);        
        num[i] = n;   
    }
    //mostrar el arreglo
    for (int i = 0; i < cant; i++){
        printf("%d\n", num[i]);   
    }
 return 0;
}
