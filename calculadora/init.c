#include <stdio.h>

int sumar(int num1,int num2); // funciones
int resta(int num1,int num2);
int multiplicar(int num1,int num2);
int divicion(int num1,int num2);
int elevar(int num1,int num2);

int main(void){
    int option;
    int result,n1,n2;

    printf("Calculadora\n");
    printf("---------------------\n");
    printf("1-Suma\n");
    printf("2-Resta\n");
    printf("3-Divición\n");
    printf("4-Multiplicación\n");
    printf("5-Elevar\n");
    printf("---------------------\n");
    printf("Digite la operacion a realizar :");
    scanf("%d",&option);
    printf("Usted selecciono la opción %d\n",option);
    printf("Digite los numeros a calcular \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    switch (option)
    {
    case 1:
        result = sumar(n1,n2);
        printf("%d\n",result);
        break;
    case 2:
        result = resta(n1,n2);
        printf("%d\n",result);
        break;
    case 3:
        result = multiplicar(n1,n2);
        printf("%d\n",result);
        break;
    case 4:
        result = divicion(n1,n2);
        printf("%d\n",result);
        break;
    case 5:
        result = elevar(n1,n2);
        printf("%d\n",result);
        break;
    default:
        break;
    }
    return 0;
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
int elevar(int num1,int num2){
    int el;
    el = num1 * num2;
    return el;
}
