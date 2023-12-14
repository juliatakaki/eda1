#include <stdio.h>
#include <stdlib.h>

struct No{
    No *pAnt;
    int num;
    No *pProx;
}No;

No *InclusaoCabecaDupla(No *pPrimeiro, int valor){
    struct No *pNovo = malloc(sizeof(No));
    if(pNovo){
        pNovo->num = valor;
        pNovo->pAnt = NULL;
        pNovo->pProx = pPrimeiro;
        pPrimeiro->pAnt = pNovo;
        pPrimeiro = pNovo;
        return pPrimeiro
    }else  
        printf("\nErro ao alocar memória.\n");
        return NULL;
}