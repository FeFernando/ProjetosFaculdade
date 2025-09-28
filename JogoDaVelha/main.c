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

        printf("Digite o n�mero onde quer mudar para X (0 para sair): ");
        scanf("%d", &num);

        if (num == 0) break; // permite sair

        if (num < 1 || num > 9) {
            printf("Posi��o inv�lida! Digite um n�mero de 1 a 9.\n");
            continue;
        }

        // Converter n�mero em coordenadas da matriz
        int linha = (num - 1) / 3;
        int coluna = (num - 1) % 3;

        // Verificar se j� est� marcado
        if (tab[linha][coluna] == 'X') {
            printf("Essa posi��o j� est� marcada!\n");
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

