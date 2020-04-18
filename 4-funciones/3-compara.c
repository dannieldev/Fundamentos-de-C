#include <stdio.h>
#include <string.h>
int compara(char*,char*);
int main(void){
    int ret; 
    
    char* cadena1;
    char* cadena2;

    printf ("Dijite una oracion");
    scanf("%s\n",cadena1);
    printf ("Dijite una oracion");
    scanf("%s\n",cadena2);
    printf ("Comparando ocaciones");

    ret = compara(cadena1,cadena2);

    if(ret < 0) {
      printf("cadena 1 es menor que cadena 2");
   } else if(ret > 0) {
      printf("Cadena 2 es menor que cadena 1");
   } else {
      printf("cadena 1 es igual a cadena 2");
   }


    return 0;
}

int compara(char *cadena1,char *cadena2){
    int ret;
    char* str1;
    char* str2;

    strcpy(str1, cadena1);
    strcpy(str2, cadena2);

   ret = strcmp(str1, str2);

   return ret;
}

