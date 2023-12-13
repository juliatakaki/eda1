#include <stdio.h>
#include <stdlib.h>

struct No{
    int num;
    struct No *pProx;
};

No *ExclusaoCauda(No *pPrimeiro){
    No *pAux;
    pAux = pPrimeiro;
    while (pAux->pProx->pProx != NULL)
        pAux = pAux->pProx;
    free(pAux->pProx);
    pAux->pProx = NULL;
    return pPrimeiro;
}