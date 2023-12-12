#include <stdlib.h>
int main(){
    int *vet1, *vet2; // declaração dos ponteiros
    vet1 = (int*) malloc(100*sizeof(int)); // alocação de memória
    vet2 = (int*) calloc(100, sizeof(int)); // alocação de memória
    free(vet1); // desalocação de memória
    free(vet2); // desalocação de memória
    return 0;
}