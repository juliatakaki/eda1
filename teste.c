#include <stdio.h>

int main(){
    int idade;
    char letra;
    float altura;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    getchar();
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    getchar();
    
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    printf("Sua idade é %d anos. \n", idade);
    if(altura >= 2){
        printf("Sua altura é %.2f metros. \n", altura);
    }else{
        printf("Sua altura é %.2f metro. \n", altura);
    }
    printf("A letra digitada foi: %c. \n", letra);

    return 0;
}