#include <stdio.h>
#include <stdlib.h>

struct No{
    struct No *pAnt;
    int num;
    struct No *pProx;
}No;

struct No *ExclusaoCaudaDupla(No *pPrimeiro){
    struct No *pAux;
    pAux = pPrimeiro;
    while(pAux->pProx->pProx != NULL)
        pAux = pAux->pProx;
    free(pAux->pProx);
    pAux->pProx = NULL;
    return pPrimeiro;
}