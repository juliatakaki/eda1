#include <stdio.h>
#include <stdlib.h>

struct No{
    struct No *pAnt;
    int num;
    struct No *pProx;
}No;

No *InclusaoCaudaDupla(No *pPrimeiro, int valor){
    struct No *pAux, *pNovo=malloc(sizeof(No));
    if(pNovo){
        pNovo->num = valor;
        pNovo->pProx = NULL;
        pAux = pPrimeiro;
        while(pAux->pProx != NULL)
            pAux = pAux->pProx;
        pAux->pProx = pNovo;
        pNovo->pAnt = pAux;
        return pPrimeiro;
    }else   
        printf("\nErro ao alocar memoria.\n");
    return NULL;
}