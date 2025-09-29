#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
    int carros[7];
    const char *dias[7] = {
        "Domingo", "Segunda", "Terca", "Quarta",
        "Quinta", "Sexta", "Sabado"
    };

    // Entrada
    for ( i = 0; i < 7; i++) {
        printf("Digite a quantidade de carros em %s: ", dias[i]);
        scanf("%d", &carros[i]);
    }

    // Descobrir o pico
    int pico = 0;
    for ( i = 1; i < 7; i++) {
        if (carros[i] > carros[pico]) {
            pico = i;
        }
    }

    // Saída em forma de tabela
    printf("\n==== Movimento no Pedagio ====\n");
    for ( i = 0; i < 7; i++) {
        if (i == pico) {
            // Negrito (ANSI: \033[1m ... \033[0m)
            printf("\033[1m%-8s : %d <-- DIA DE PICO\033[0m\n", dias[i], carros[i]);
        } else {
            printf("%-8s : %d\n", dias[i], carros[i]);
        }
    }

    return 0;
}

