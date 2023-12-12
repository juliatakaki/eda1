#include <stdlib.h>
#include <stdio.h>

long int somavet(int *a, int qtde){
    // a = (int *)malloc(qtde * sizeof(int));
    if(*a == 0)
        return 0;
    else{
        return *a = *a + somavet(a, qtde);
        }
    free(a);
}

int main(){
    int qtde, *a, res;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &qtde);

    int *ptr = (int *)malloc(qtde * sizeof(int));

    printf("Digite os valores:\n");
    scanf("%d", a);
    res = somavet(a, qtde);
    printf("Resultado: %d", res);
    
    return 0;
}