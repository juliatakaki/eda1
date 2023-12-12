#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *Inclui(char *pvetcar, int *ptammax, int *pqtde, char c){
    if(*pqtde < *ptammax){
        pvetcar[*pqtde] = c;
        (*pqtde)++;
    }else{
        *ptammax = *ptammax +1;
        char *pvetcar2;
        pvetcar2 = (char *)malloc(*ptammax * sizeof(char));
        strcpy(pvetcar2, pvetcar);
        pvetcar2[*pqtde] = c;
        (*pqtde)++;
        printf("%s\n", pvetcar2);
        pvetcar = pvetcar2;
        free(pvetcar2);
    }
    return(pvetcar);
}

char *Exclui(char c){

}

int main(){
    int tammax = 3;  // Tamanho máximo do vetor
    int qtde = 3;     // Quantidade atual de elementos no vetor
    char pvetcar[] = "abc";
    printf("%s\n", pvetcar);  // Imprime o vetor original
    *Inclui(pvetcar, &tammax, &qtde, 'd');
    printf("%s\n", pvetcar);  // Imprime o vetor após a inclusão
}