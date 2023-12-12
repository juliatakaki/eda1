#include <stdio.h>
#include <stdlib.h>

void calcular(int *a){
    *a = *a * *a;
    printf("Quadrado: %d", *a);
}

int main(){
    int *p;
    p = (int *)malloc(sizeof(int));
    printf("Digite um inteiro: ");
    scanf("%d", p);
    calcular(p);
    free(p);
    return 0;
}