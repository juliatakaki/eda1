#include <stdio.h>
#include <stdlib.h>

int EIgual(int pveta[], int pvetb[], int ptama, int ptamb){
    int cnt = 0;
    if(ptama == ptamb){
        for(int i=0; i<ptama; i++){
            if(pveta[i] == pvetb[i])
                cnt++;
        }
        if(cnt == ptama){
            return 1;
        }else{
            return 0;
        }
    } 
}

int main(){
    int vet1[] = {1, 2, 3}, vet2[] = {1, 2, 3}, vet3[] = {3, 2, 1};
    if(EIgual(vet1, vet3, 3, 3) == 1){
        printf("Verdadeiro. \n");
    }else{
        printf("Falso");
    }
    return 0;
}