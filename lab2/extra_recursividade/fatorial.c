#include <stdio.h>

int Fatorial(int x){
    if(x == 0){
        return 1;
    }else if(x == 1){
        return 1;
    }else{
        return x * Fatorial(x-1);
    }
}

int main(){
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
    int res = Fatorial(x);
    printf("O fatorial de %d eh %d.\n", x, res);
}