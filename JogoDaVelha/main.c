#include <stdio.h>
#include <stdlib.h>

int main() {
    char tab[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };
    
    int num, i, j;
    int jogadas = 0;
    
    do {
        // Mostrar tabuleiro
        printf("\nTabuleiro atual:\n");
        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 3; j++) {
                printf("%c ", tab[i][j]);
            }
            printf("\n");
        }

        printf("Digite o número onde quer mudar para X (0 para sair): ");
        scanf("%d", &num);

        if (num == 0) break; // permite sair

        if (num < 1 || num > 9) {
            printf("Posição inválida! Digite um número de 1 a 9.\n");
            continue;
        }

        // Converter número em coordenadas da matriz
        int linha = (num - 1) / 3;
        int coluna = (num - 1) % 3;

        // Verificar se já está marcado
        if (tab[linha][coluna] == 'X') {
            printf("Essa posição já está marcada!\n");
            continue;
        }

        // Marcar com X
        tab[linha][coluna] = 'X';
        jogadas++;

    } while (jogadas < 9);

    printf("\nTabuleiro final:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%c ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}

