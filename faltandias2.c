#include <stdio.h>
int faltandias(int d, int m);

int main(void){

    int result; 
    int d,m;
    printf("Dias de hoy numero\n");
    scanf("%d",&d);

    printf("Mes numero\n");
    scanf("%d",&m);

    result = faltandias(d,m);
    printf("El numero de dias es: %d",result);
    

    
    return 0;
}
int faltandias(int dd,int mm){
    int dias = 0;

    switch ( mm ){
      case 1 : dias = dias + 31;
      case 2 : dias = dias + 28;
      case 3 : dias = dias + 31;
      case 4 : dias = dias + 30;
      case 5 : dias = dias + 31;
      case 6 : dias = dias + 30;
      case 7 : dias = dias + 31;
      case 8 : dias = dias + 31;
      case 9 : dias = dias + 30;
      case 10 : dias = dias + 31;
      case 11 : dias = dias + 30;
      case 12 : dias = dias + 31;
      break;
      default : printf( "\n   ERROR: Dia incorrecto." );
   }
    
        
    return dias-dd;
}
