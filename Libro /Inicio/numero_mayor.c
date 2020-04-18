#include <stdio.h>

int main(void){

        int i,j,k,max;

        scanf("%d %d %d",&i,&j,&k);
        printf("\n");
        max = i;

        if (j> max) max = j;
        if (k > max) max = k;
        printf("EL mayor de %-5d %-5d %-5d es : %5d\n",i,j,k,max);

    return 0;
}