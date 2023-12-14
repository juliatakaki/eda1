#include <stdio.h>
#include <stdlib.h>

struct No{
    struct No *pAnt;
    int num;
    struct No *pProx;
}No;

struct No *ExclusaoChaveDupla(No *pPrimeiro, int chave){
    struct No *pAux;
    pAux = pPrimeiro;
    while(pAux->num != chave)
        pAux = pAux->pProx;
    pAux->pAnt->pProx = pAux->pProx
    pAux->pProx->pAnt = pAux->pAnt;
    free(pAux);
    return pPrimeiro;
}