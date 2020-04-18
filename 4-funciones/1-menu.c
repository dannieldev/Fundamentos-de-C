#include <stdio.h>

int sumar(int num1,int num2); // funciones
int resta(int num1,int num2);
int multiplicar(int num1,int num2);
int divicion(int num1,int num2);

int main(void){
    int operacion;
    int num1, num2,resultado;

    printf("Operaciones Matematicas\n");
    printf("1. Suma \n"); 
    printf("2. Resta \n");
    printf("3. Multiplicasion \n");
    printf("4. Divicion\n");
    printf("Elege numero de opcion\n");
    scanf("%d",&operacion);
    printf("Dijite los numeros para realizar la operacion \n");
    scanf("%d \n",&num1);
    scanf("%d",&num2);
    
    switch(operacion) {
        case 1 :
        resultado = sumar(num1,num2);
        printf("El resultado es %d\n",resultado);
        break; 
        case 2 :
        resultado = resta(num1,num2);
        printf("El resultado es %d\n",resultado);
        break; 
        case 3 :
        resultado = multiplicar(num1,num2);
        printf("El resultado es %d\n",resultado);
        break; 
        case 4 :
        resultado = divicion(num1,num2);
        printf("El resultado es %d\n",resultado);
        break;
    
    default : 
    printf("Mal");
   }
}

int sumar(int num1,int num2){
    int sum;
    sum = num1 + num2;
    return sum;
}
int resta(int num1,int num2){
    int rest;
    rest = num1 - num2;
    return rest;
}
int multiplicar(int num1,int num2){
    float multi;
    multi = num1 * num2;
    return multi;
}
int divicion(int num1,int num2){
    float div;
    div = num1 / num2;
    return div;
}