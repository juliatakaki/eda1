#include <stdio.h>

int main(void){
    int numero, *ptr;
    numero = 3284;
    ptr = &numero;
    *ptr = 9674;
    printf("%d, %d, %d", numero, &numero, *ptr);
}