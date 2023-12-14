#include <stdio.h>
#include <stdlib.h>

struct No{
  struct No *pAnt;
  int num;
  struct No *pProx;
}No;

No *InclusaoDepoisDupla(No *pPrimeiro, int chave, int valor){
    struct No *pAux, *pNovo=malloc(sizeof(No));
    if(pNovo){
        pNovo->num = valor;
        pAux = pPrimeiro;
        while(pAux->pProx->valor != chave)
            pAux = pAux->pProx
        pNovo->pProx = pAux->pProx;
        pNovo->pAnt = pAux;
        pAux->pProx = pNovo;
        pNovo->pProx->pAnt = pNovo;
    }else
        printf("\nErro ao alocar memoria\n");
    return NULL;
}