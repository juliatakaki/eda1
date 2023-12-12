# include <stdio.h>

int expo(int x, int y);

int main(void){
    int x, y, e;
    printf("Exponencial de x elevado a y\n");
    printf("Digite um inteiro para x (base): ");
    scanf("%d", &x);
    printf("Digite um inteiro para y (expoente): ");
    scanf("%d", &y);

    if(y < 0){
        printf("y deve ser maior ou igual a 0.\n");
        getchar();
    }else{
        e = expo(x, y);
        printf("Resultado de x elevado a y: %d", e);
        getchar();
    }
} 

int expo(int x, int y){
    if(y == 0)
        return 1;
    if(y == 1)
        return x;
    else{
        return x*expo(x, y-1);
    }
}