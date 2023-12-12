#include <stdio.h>
#include <stdlib.h>

void Soma(int n){
    float soma = 0; 
    int *vet = (int *)malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    for(int i=0; i<n; i++){
        soma = soma + ((i+1)/(float)vet[i]);
    }

    printf("Resultado: %f", soma);
    free(vet);
}

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    Soma(n);

    return 0;
}