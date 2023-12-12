#include <stdio.h>

int soma_digitos(int n){
    if(n<10)
        return n;
    else
        return n%10 + soma_digitos(n/10);
}

int main(){
    int n, soma;
    printf("Digite um numero: ");
    scanf("%d", &n);
    soma = soma_digitos(n);
    printf("Soma dos algarismos: %d", soma);
    
    return 0;
}