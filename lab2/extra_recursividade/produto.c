#include <stdio.h>

int produto(int a, int b){
    if(a == 0 || b == 0)
        return 0;
    else    
        return a + produto(a, b-1);
}

int main(){
    int a, b, res;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    res = produto(a, b);
    printf("Resultado: %d", res);

    return 0;
}