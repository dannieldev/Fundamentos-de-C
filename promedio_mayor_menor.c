#include <stdio.h>
int main(void){
//Realizar un programa que saque el promedio de y que obtnea el mayor y menor
    int arr[4],num;
    int sum =0;
    float pro;
    printf("Ingrese 4 numeros\n");
    //almacenar en el arreglo
    for (int i = 0; i < 4; i++){
        
        scanf("%d", &num);
        arr[i] = num;
        sum = sum+num;
    }
    for (int i = 0; i < 4; i++){
        if(arr[i] < arr[] ){
        }
    }

    pro = (sum / 4);
    printf("Promedio %f \n",pro);
    printf("Total %d \n",sum);

return 0;
}
