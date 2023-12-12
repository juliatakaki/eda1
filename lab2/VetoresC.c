# include <stdlib.h>

// função para alocar um vetor de inteiros
int *CriaVetInt(int qtdElem){ // 'int *' significa que a função retorna um ponteiro para inteiro
    int *vetor; // delcaração de ponteiro
    vetor = (int*)malloc(qtdElem*sizeof(int)); // armazena dinamicamente 'tamanho' bytes na memória

    return vetor; // retorna o ponteiro para o vetor alocado
}

// função para alocar um vetor de floats
float *CriaVetFloat(int qtdElem){
    float *vetor;
    vetor = (float*)malloc(qtdElem*sizeof(float));

    return vetor;
}