#include <stdio.h>
#include <string.h>

void DeslocValidos(char T[], char P[]){
    int n = strlen(T); // vetor maior
    int m = strlen(P);

    for(int s = 0; s <= n-m; s++){
        int match = 1; // verifica se P ocorre em T
        for(int i = 0; i < m; i++){ // comparar os elementos no deslocamento s
            if(T[s+i] != P[i]) // comparar os elementos no mesmo deslocamento
                match = 0; // se é diferente, não é valido
                break;
        }
        if(match)
            printf("Deslocamento valido em s = %d\n", s+1);
    }
}

int main(){
    char T[] = "armario";
    char P[] = "ar";
    DeslocValidos(T, P);
    return 0;
}