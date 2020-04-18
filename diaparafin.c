#include <stdio.h>
int faltandias(int d, int m);

int main(void){

    int result; 
    int d,m;
    printf("Dias de hoy numero\n");
    scanf("%d\n",&d);

    printf("Mes numero\n");
    scanf("%d\n",&m);

    result = flatandias(d,m);
    printf("El numero de dias es: %d",result);
    

    
    return 0;
}
int flatandias(int dd,int mm){
    int dias = 0;
    int sumad == 0;
    19 10
    31-19 = dias para terminar mes
    noviembre = 30
    diciembre = 31

    switch ( mm ){

      case 1 :  int tdias = 31;
               sumad = dd-tdias;
               dias = sumad + dias;
               break;
      case 2 :  int tdias = 28;
               sumad = dd-tdias;
               dias = sumad + dias;
               break;
      case 3 :  int tdias = 31;
               sumad = dd-tdias;
               dias = sumad + dias;
               break;
      case 4 : int tdias = 30;
               sumad = dd-tdias;
               dias = sumad + dias;
               break;
      case 5 : int tdias = 31;
               sumad = dd-tdias;
               dias = sumad + dias;
               break;
      case 6 : int tdias = 30;
               sumad = dd-tdias;
               dias = sumad + dias;
               break;
      case 7 : int tdias = 31;
               sumad = dd-tdias;
               dias = sumad + dias;
               break;
      case 8 : int tdias = 31;
               break;
      case 9 : int tdias = 30;
               break;
      case 10 : int tdias = 31;
               break;
      case 11 :int tdias = 30;
               break;
      case 12 : int tdias = 31;
               break;
   default : printf( "\n   ERROR: Dia incorrecto." );
   }
    
        
    return dias;
}
