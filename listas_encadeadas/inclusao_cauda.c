#include <stdio.h>
#include <stdlib.h>

struct No{
    int num;
    struct No *pProx;    
};

No *inclusaoCauda(No *pPrimeiro, int valor){
    No *pAux, *novo = (No *)malloc(sizeof(No));
    novo->num = valor;
    novo->pProx = NULL;
    pAux = pPrimeiro;
    while (pAux->pProx != NULL)
        pAux = pAux->pProx;
    pAux->pProx = novo;
    return pPrimeiro;
}
