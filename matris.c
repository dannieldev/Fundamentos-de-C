#include <stdio.h>
int main(void){
int ii = 0;
int jj = 0;
int num[3][3]; //tamaño de la matriz
int n = 2;

int k= 1;
num[0][0]=k++; num[0][1]=k++; num[0][2]=k++;
num[1][0]=k++; num[1][1]=k++; num[1][2]=k++;
num[2][0]=k++; num[2][1]=k++; num[2][2]=k++;


    for (int i= 0; i<3; i++){
      for (int j= 0; j<3; j++){
        
          printf("%d\n",num[i][j]);
       
    }
}
//Invertida 
     for (int i=0; i<3; i++){
    //filas
      for (int j=0; j<3; j++){
        //columnas 
         if(i+j == n-1){
             printf("%d\n",num[i][j]);
          }
       }
    }

    return 0;
}
