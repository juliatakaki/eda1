#include <stdio.h>
#include <stdlib.h>

struct No{
    struct No *pAnt;
    int num;
    struct No *pProx;
}No;

struct No *ExclusaoCabecaDupla(No *pPrimeiro){
    pPrimeiro = pPrimeiro->pProx;
    free(pPrimeiro->pAnt);
    pPrimeiro->pAnt = NULL;
    return pPrimeiro;
}
