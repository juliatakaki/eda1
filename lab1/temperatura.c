#include <stdio.h>

int main()
{
    float temp;
    char op;

    printf("Digite a temperatura: ");
    scanf("%f", &temp);
    while ((getchar()) != '\n');
    printf("Digite  C - Fahrenheit para Celsius, F - Celsius para Fahrenheit ou S - Sair: \n");
    scanf("%c", &op);

    switch (op){
        case 'c':
        case 'C' || 'c':
            temp = (temp - 32) / 1.8;
            printf("A temperatura em celsius eh %.2f.\n", temp);
            break;

        case 'f':
        case 'F':
            temp = (temp * 1.8) + 32;
            printf("A temperatura em celsius eh %.2f.\n", temp);
            break;

        case 's':
        case 'S':
            printf("Saindo do programa.\n");
            break;

        default:
            printf("Opção invalida.\n");
            break;
    }
    return 0;
}