#include <stdio.h>
int LongitudCadena(char*);

int main(void){

///char * cadena = "jpsa sdad";
char frase[32];
printf("Ingrese frase: ");
fflush(stdin);scanf("%s\n",frase);

printf("\nLongitud de la cadena: %d letras.\n",
LongitudCadena(frase));
return 0;
}

int LongitudCadena (char *cadena){
    int j=0;
    while (cadena[j] != '\0') {
        j++;
    }
    
    return j;
}