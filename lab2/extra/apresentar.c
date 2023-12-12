#include <stdio.h>
#include <stdlib.h>

void apresentar(int *x){
    printf("Valor: %d", *x);
}

int main(void){
    int *p;
    p = (int*)malloc(sizeof(int));
    printf("Digite um valor inteiro: ");
    scanf("%d", p);
    apresentar(p);
    free(p);
    return 0;
}