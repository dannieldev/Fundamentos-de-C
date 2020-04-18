#include <stdio.h>

int main(void){           
    int num[10];
    int n;
    int ban=0;

    for(int i=0; i<10; i++){
        printf("Ingrese numero:"); 
        scanf("%d",&num[i]);       
    }
            
    printf("Ingrese numero para buscar: ");
    scanf("%d",&n);

    for(int i=0; i<10; i++){
        if(n==num[i]){
            ban=1;
            printf("el numero %d si se encuentra en la serie\n",n);      
            break;  
       }else{
            ban=0;
       }
    }
    if(ban==0){
        printf("el numero no se encuentra en el arreglo\n");
    }       
    return 0;
}
      