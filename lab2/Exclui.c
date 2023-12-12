#include <stdio.h>
#include <stdlib.h>

void Exclui(float pvalores[], int *ptamanho, float pv)
{
    do
    {
        int i, j;
        for (i = 0; i < *ptamanho; i++)
        {
            if (pvalores[i] == pv)
            {
                for (j = i; j < *ptamanho - 1; j++)
                {
                    pvalores[j] = pvalores[j + 1];
                }
                (*ptamanho)--;
                break;
            }
        }
    } while (1);
    
}

int main()
{
    float valores[] = {1.1, 2.2, 3.3, 2.2, 4.4};
    int tamanho = 5;

    printf("Valores originais: \n");
    for (int i = 0; i < tamanho; i++)
        printf("%.2f \n", valores[i]);

    float valor_a_excluir = 2.2;
    Exclui(valores, &tamanho, valor_a_excluir);

    printf("Valores apos a exclusao de %.2f: \n", valor_a_excluir);
    for (int i = 0; i < tamanho; i++)
        printf("%.2f \n", valores[i]);

    return 0;
}