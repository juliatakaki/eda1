#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LINHA 1000 // Número máximo de linhas no arquivo
#define MAX_NOME 100   // Tamanho máximo do nome do município

typedef struct {
    int codigo_ibge;
    int linha;
    char nome[MAX_NOME];
    char uf[3];
    char regiao[20];
    int populacao_2010;
    char porte[10];
} Municipio;

void carga_vetor(Municipio vetor[], int *num_municipios, const char *arquivo) {
    FILE *file = fopen(arquivo, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    *num_municipios = 0;
    while (fscanf(file, "%d,%d,%99[^,],%2[^,],%19[^,],%d,%9[^,],", 
                  &vetor[*num_municipios].codigo_ibge, &vetor[*num_municipios].linha, 
                  vetor[*num_municipios].nome, vetor[*num_municipios].uf, 
                  vetor[*num_municipios].regiao, &vetor[*num_municipios].populacao_2010, 
                  vetor[*num_municipios].porte) == 7) {
        (*num_municipios)++;
        if (*num_municipios >= MAX_LINHA) {
            fprintf(stderr, "Número máximo de linhas atingido. Ajuste MAX_LINHA se necessário.\n");
            exit(EXIT_FAILURE);
        }
    }

    fclose(file);
}

Municipio* busca_sequencial(int codigo, Municipio vetor[], int num_municipios, double *tempo_execucao) {
    clock_t inicio = clock();
    for (int i = 0; i < num_municipios; i++) {
        if (vetor[i].codigo_ibge == codigo) {
            *tempo_execucao = ((double)(clock() - inicio)) / CLOCKS_PER_SEC;
            return &vetor[i];
        }
    }
    *tempo_execucao = ((double)(clock() - inicio)) / CLOCKS_PER_SEC;
    return NULL;
}

Municipio* busca_binaria(int codigo, Municipio vetor[], int num_municipios, double *tempo_execucao) {
    clock_t inicio = clock();
    int inicio_idx = 0, fim_idx = num_municipios - 1;

    while (inicio_idx <= fim_idx) {
        int meio = (inicio_idx + fim_idx) / 2;
        if (vetor[meio].codigo_ibge == codigo) {
            *tempo_execucao = ((double)(clock() - inicio)) / CLOCKS_PER_SEC;
            return &vetor[meio];
        } else if (vetor[meio].codigo_ibge < codigo) {
            inicio_idx = meio + 1;
        } else {
            fim_idx = meio - 1;
        }
    }

    *tempo_execucao = ((double)(clock() - inicio)) / CLOCKS_PER_SEC;
    return NULL;
}

int main() {
    Municipio vetor_municipios[MAX_LINHA];
    int num_municipios = 0;

    const char *arquivo = "Lista_Municípios_com_IBGE_Brasil_Versao_CSV.csv";
    carga_vetor(vetor_municipios, &num_municipios, arquivo);

    while (1) {
        printf("\n1. Carga do vetor\n");
        printf("2. Buscar informações de um município\n");
        printf("3. Sair\n");

        int opcao;
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Carga do vetor realizada.\n");
        } else if (opcao == 2) {
            int codigo_busca;
            printf("Digite o código do município: ");
            scanf("%d", &codigo_busca);

            // Busca Sequencial
            double tempo_sequencial;
            Municipio *resultado_sequencial = busca_sequencial(codigo_busca, vetor_municipios, num_municipios, &tempo_sequencial);
            if (resultado_sequencial != NULL) {
                printf("\nResultado da Busca Sequencial:\n");
                printf("Município: %s\n", resultado_sequencial->nome);
                printf("UF: %s\n", resultado_sequencial->uf);
                printf("Região: %s\n", resultado_sequencial->regiao);
                printf("População em 2010: %d\n", resultado_sequencial->populacao_2010);
                printf("Porte: %s\n", resultado_sequencial->porte);
                printf("Tempo de execução: %f segundos\n", tempo_sequencial);
            } else {
                printf("Município não encontrado na Busca Sequencial.\n");
            }

            // Busca Binária
            double tempo_binaria;
            Municipio *resultado_binaria = busca_binaria(codigo_busca, vetor_municipios, num_municipios, &tempo_binaria);
            if (resultado_binaria != NULL) {
                printf("\nResultado da Busca Binária:\n");
                printf("Município: %s\n", resultado_binaria->nome);
                printf("UF: %s\n", resultado_binaria->uf);
                printf("Região: %s\n", resultado_binaria->regiao);
                printf("População em 2010: %d\n", resultado_binaria->populacao_2010);
                printf("Porte: %s\n", resultado_binaria->porte);
                printf("Tempo de execução: %f segundos\n", tempo_binaria);
            } else {
                printf("Município não encontrado na Busca Binária.\n");
            }
        } else if (opcao == 3) {
            printf("Saindo do programa.\n");
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
