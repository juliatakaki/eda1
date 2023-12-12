#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{ //para n>1
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n;
    printf("Digite o termo de Fibonacci a ser calculado: ");
    scanf("%d", &n);

    if(n<0){
        printf("O valor não pode ser negativo.\n");
    }else{
        int res;
        res = fibonacci(n);
        printf("O resultado eh %d", res);
    }
    return 0;
}