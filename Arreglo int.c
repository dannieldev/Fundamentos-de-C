#include <stdio.h>

int main(void){
    int n, num[5];
    
    for (int i=0; i<5; i++){
        scanf ("%d", &n);        
        num[i] = n;   
    }
    for (int i=0; i<5; i++){
        printf ("%d\n", num[i]);   
    }
 return 0;
}
