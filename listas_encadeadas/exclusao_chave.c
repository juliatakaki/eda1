#include <stdio.h>
#include <stdlib.h>

struct No{
    int num;
    struct No *pProx;
};

No *ExcluiChave(No *pPrimeiro, int chave){
    No *pAnt, *pPost;
    pAnt = pPrimeiro;
    while(pAnt->pProx->num != chave)
        pAnt = pAnt->pProx;
    pPost = pAnt->pProx->pProx;
    free(pAnt->pProx);
    pAnt->pProx=- = pPost;
    return pPrimeiro;
}