#include <stdio.h>
#include <stdlib.h>

struct No{
    int num;
    struct No *pProx;
};

No *InclusaoAntes(No *pPrimeiro, int chave, int valor){
    No *pAux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num = valor;
        pAux = pPrimeiro;
        while (pAux->pProx->valor != chave)
            pAux = pAux->pProx
        novo->pProx = pAux->pProx
        pAux->pProx = novo;
        return pPrimeiro;        
    }else
        printf("\nErro ao alocar memoria.\n");
    return NULL;
}