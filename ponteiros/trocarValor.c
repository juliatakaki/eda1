#include <stdio.h>

void trocarValor(float *ptr1, float *ptr2);

int main(void){
    float a = 3.14, b = 2.71;
    printf("Valores originais: %.2f, %.2f\n", a, b);
    trocarValor(&a, &b);
    printf("Valores trocados: %.2f, %.2f\n", a, b);
}

void trocarValor(float *ptr1, float *ptr2){
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}