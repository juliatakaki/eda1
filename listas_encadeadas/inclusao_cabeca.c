#include <stdio.h>
#include <stdlib.h>

struct No{
    int num; // valor numérico do nó
    struct No *pProx; // ponteiro para o próximo nó da pilha
};

No *InclusaoCabeca(No *pPrimeiro, int valor){
    No *novo = (No *)malloc(sizeof(No)); // memória para o novo nó
    if (novo){
        novo->num = valor; // valor = valor do novo nó
        novo->pProx = pPrimeiro; // para onde o novo irá apontar
        return novo;
    }
    else
        printf("\nErro ao alocar memoria.\n");
    return NULL; // falha na alocação
}
