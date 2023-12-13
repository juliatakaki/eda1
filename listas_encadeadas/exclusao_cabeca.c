#include <stdio.h>
#include <stdlib.h>

struct No
{
    int num;
    struct No *pProx;
};

No *ExclusaoCabeca(No *pPrimeiro){
    No *pAux;
    pAux = pPrimeiro;
    pPrimeiro = pPrimeiro->pProx;
    free(pAux);
    return pPrimeiro;
}