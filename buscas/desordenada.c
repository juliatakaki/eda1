#include <stdio.h>

int buscaSequencialDesordenada(int *V, int n, int chave){
    int p, posicao = -1;
    for(p = 0; p < n; p++){
        if(chave == V[p])
            posicao = p;
    }
    return posicao;
}

int main(){
    int vetor[] = {2, 8, 9, 4, 3, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave = 4;

    int posicao = buscaSequencialDesordenada(vetor, tamanho, chave);

    if(posicao != -1)
        printf("Chave %d encontrada na posicao %d.\n", chave, posicao+1);
    else   
        printf("Chave %d nao encontrada no vetor.\n", chave);

    return 0;
}