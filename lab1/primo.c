#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    // verificar se o número é primo (divisível APENAS por 1 e por ele mesmo)
    for(int i=1; i<=n; i++){
        if(n%2 != 0){ //verifica se é o número 2
            if(n%i != 0){
                printf("O numero digitado eh primo.\n");
            }else{
                printf("O numero digitado nao eh primo.\n");
            }
        }
    }
    return 0;
}

/*
#include <stdio.h>

int main() {
    int n;
    int primo = 1; // Assumimos que o número é primo inicialmente

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0; // Números menores ou iguais a 1 não são primos
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = 0; // Se for divisível por algum número entre 2 e a raiz quadrada de n, não é primo
                break;
            }
        }
    }

    if (primo) {
        printf("O numero digitado eh primo.\n");
    } else {
        printf("O numero digitado nao eh primo.\n");
    }

    return 0;
}
*/