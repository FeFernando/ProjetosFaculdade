#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float vetor[10];   
    float aux;         
    int i, j;          
    int n = 10;        // tamanho do vetor

   
    for (i = 0; i < n; i++) {
        printf("Digite o preco do %d� produto: ", i + 1);
        scanf("%f", &vetor[i]);   
    }

    // Mostrar pre�os digitados
    printf("\n=========================================\n");
    printf("\nPrecos digitados:\n");
    printf("\n-----------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("Preco do produto %d: %.2f \n", i + 1, vetor[i]);
    }
    printf("\n=========================================\n");

    
    // La�o externo controla o n�mero de passagens
    for (i = n - 1; i > 0; i--) {
        // La�o interno percorre o vetor at� a posi��o i
        for (j = 0; j < i; j++) {
            // Se o elemento atual � maior que o pr�ximo, troca
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    // Mostrar vetor em ordem crescente
    printf("\n=========================================\n");
    printf("\nPrecos em ordem crescente:\n");
    printf("\n-----------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("Preco do produto %d: %.2f \n", i + 1, vetor[i]);
    }
    printf("\n=========================================\n");

    // Mostrar vetor em ordem decrescente
    // Aqui n�o precisa ordenar de novo,
    // basta percorrer o vetor ao contr�rio
    printf("\n=========================================\n");
    printf("\nPrecos em ordem decrescente:\n");
    printf("\n-----------------------------------------\n");
    for (i = n - 1; i >= 0; i--) {
        printf("Produto %d: R$ %.2f\n", i + 1, vetor[i]);
    }
    printf("\n=========================================\n");

    return 0;
}

