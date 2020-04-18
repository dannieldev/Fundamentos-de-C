#include <stdio.h>

int main(void){
    int n, num[5];
    //almacenar en el arreglo
    for (int i = 0; i < 5; i++){
        scanf("%d", &n);        
        num[i] = n;   
    }
    //mostrar el arreglo
    for (int i = 0; i < 5; i++){
        printf("%d\n", num[i]);   
    }
 return 0;
}
