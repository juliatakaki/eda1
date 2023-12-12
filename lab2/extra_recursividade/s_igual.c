#include <stdio.h>
#include <stdlib.h>

int s_igual(char *a, char *b){
    if(*a == '\0' && *b == '\0') // verifica se as duas string são vazias
        return 1;
    else if(*a != *b) // verifica se cada caracter é diferente
        return 0;
    else // se os caracteres são iguais:
        return s_igual(a + 1, b + 1);
}

int main(){
    char a[50], b[50];
    int res;

    printf("Digite a primeira string: ");
    scanf("%s", a);
    printf("Digite a segunda string: ");
    scanf("%s", b);

    res = s_igual(a, b);

    if(res)
        printf("As string sao iguais.\n");
    else
        printf("As string sao diferentes.\n");

    return 0;
}