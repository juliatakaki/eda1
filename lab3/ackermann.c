#include <stdio.h>

int ackermannRecursivo(int m, int n){
    if(m==0)
        return n+1;
    else if(n==0 && m>0)
        return ackermannRecursivo(m-1, 1);
    else if(m>0 && n>0)
        return ackermannRecursivo(m-1, ackermannRecursivo(m, n-1));
}

int main(){
    int m, n, res;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &m, &n);
    if(m<0 || n<0)
        printf("Os valores devem ser positivos.\n");
    else{
        res = ackermannRecursivo(m, n);
        printf("Valor de Ackermann para m=%d e n=%d: %d\n", m, n, res);
    }
    return 0;
}