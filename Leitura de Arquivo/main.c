#include <stdio.h>

int main() {
    FILE *arquivo;

    // Abrir arquivo para escrita (cria novo ou sobrescreve)
    arquivo = fopen("funcionarios.txt", "w"); // <--- mesmo nome para leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para escrita.\n");
        return 1;
    }

    // Escrever dados no arquivo
    fprintf(arquivo, "Joao_Silva 30 3500.50\n");
    fprintf(arquivo, "Maria_Santos 25 4200.00\n");
    fprintf(arquivo, "Pedro_Costa 35 5500.75\n");
    fprintf(arquivo, "Felipe_Chanfrone 29 3000\n");

    fclose(arquivo);

    // Abrir arquivo para leitura
    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura.\n");
        return 1;
    }

    char nome[50];
    int idade;
    float salario;

    printf("Dados dos funcionários:\n");
    while (fscanf(arquivo, "%s %d %f", nome, &idade, &salario) == 4) {
        printf("Nome: %s, Idade: %d, Salário: %.2f\n", nome, idade, salario);
    }

    fclose(arquivo);
    return 0;
}

