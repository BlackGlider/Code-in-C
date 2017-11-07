/*---------------------------------SCAMBIARE IL VALORE DI DUE VARIABILI--------------------------------*/

#include <stdio.h>

void swap(int *p, int *q);

int main(void){
    
    int i, j;
    
    i = 5;
    j = 6;
    
    swap(&i, &j);
    
    printf("%d %d\n", i, j);
    
    return 0;
    
}

void swap(int *p, int *q){
    
    int temp;
    
    temp = *p;
    *p = *q;
    *q = temp;
    
    
}
