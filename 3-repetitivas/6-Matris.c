#include <stdio.h>

int main(void){
    int matris [3][3];
    int fila,colu;
    for (int i= 0; i<3; i++){
        //Filas 
      for (int j= 0; j<3; j++){
        //Columnas
        printf("Llenar matris ");
        printf("[%d] ",i);
        printf("= ");
        scanf("%d]",&colu);
        matris[i][j] =  colu;
      }
    }
    for (int i=0; i<3; i++){
    //filas
      for (int j=0; j<3; j++){
        //columnas 
        if(i==j){
            printf("%d\n",matris[i][j]);
        }

       }
    }
    return 0;
}