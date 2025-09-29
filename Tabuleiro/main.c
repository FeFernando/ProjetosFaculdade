#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char tabuleiro[3][3] ={
	{'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
	};
	char i, j, num;
	bool vencedor = false;
	
	
	
	
	if ( tabuleiro[0][0] == 'x' && tabuleiro[0][0] == 'x' )
	
	
	
	
	
	do {
        // ==== IMPRIMIR TABELA ====
        printf("\n");
        for ( i = 0; i < 3; i++) {
            printf(" %c | %c | %c \n",
                   tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
            if (i < 2) printf("-----------\n");
        }

        // ==== ENTRADA DO JOGADOR ====
        printf("\nDigite o número onde vai jogar o 'X': ");
        scanf(" %c", &num);   // espaço antes de %c ignora ENTER

        // ==== MARCAR TABULEIRO ====
        for (i = 0; i < 3; i++) {
            for ( j = 0; j < 3; j++) {
                if (num == tabuleiro[i][j]) {
                    tabuleiro[i][j] = 'X';
                }
            }
        }

        // (Aqui entraria a verificação de vitória)
        // Para testar, digite '0' para sair
        if (num == '0') vencedor = true;

    } while (!vencedor);
	return 0;
}
