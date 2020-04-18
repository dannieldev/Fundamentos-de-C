#include <stdio.h>
int main(void){
int a,b,c,d,e,orden;

printf("ingrese primero numero:\n");
scanf("%d\n",&a);
printf("ingrese segundo numero:\n");
scanf("%d\n",&b);
printf("ingrese tercer numero:\n");
scanf("%d\n",&c);
printf("ingrese cuarto numero:\n");
scanf("%d\n",&d);
printf("ingrese quinto numero:\n");
scanf("%d\n",&e);
if(a>b){
    orden=a;
    a=b;
    b=orden;
}
if(a>c){
    orden=a;
    a=c;
    c=orden;
}
if(a>d){
    orden=a;
    a=d;
    d=orden;
}
if(a>e){
    orden=a;
    a=e;
    e=orden;
}
// Compara con b
if(b>c){
    orden=b;
    b=c;
    c=orden;
}

if(b>d){
    orden=b;
    b=d;
    d=orden;
}
if(b>e){
    orden=b;
    b=e;
    e=orden;
}
// Compara con c
if(c>d){
    orden=c;
    c=d;
    d=orden;
}
if(c>e){
    orden=c;
    c=e;
    e=orden;
}
// Compara con d entre e
if(d>e){
    orden=d;
    d=e;
    e=orden;
}

printf("los datos ordenados son:\n");
printf("1er: %d\n",a);
printf("2er: %d\n",b);
printf("3er: %d\n",c);
printf("4er: %d\n",d);
printf("5er: %d\n",e);

return 0;
}