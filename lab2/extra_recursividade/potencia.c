#include <stdio.h>

int potencia(int x, int y){
    if(y == 0)
        return 1;
    else
        return x * potencia(x, y-1);
}

int main(){
    int x, y, res;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);
    res = potencia(x, y);
    printf("Resultado (%d^%d): %d", x, y, res);

    return 0;
}