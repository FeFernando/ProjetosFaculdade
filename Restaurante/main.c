#include <stdio.h>
#include <stdlib.h>

/* Programa para ler a quantidade de pratos vendidos por dia da semana
   e calcular a média semanal. */

int main(int argc, char *argv[]) {
	
	
	
	printf("¦¦¦¦¦¦  ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦  ¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦¦    ¦¦ ¦¦¦¦¦¦¦¦ \n");
    printf("¦¦   ¦¦ ¦¦      ¦¦         ¦¦    ¦¦   ¦¦ ¦¦      ¦¦    ¦¦ ¦¦    ¦¦ ¦¦¦¦   ¦¦    ¦¦    \n");
    printf("¦¦¦¦¦¦  ¦¦¦¦¦   ¦¦¦¦¦¦¦    ¦¦    ¦¦¦¦¦¦¦ ¦¦      ¦¦    ¦¦ ¦¦    ¦¦ ¦¦ ¦¦  ¦¦    ¦¦    \n");
    printf("¦¦   ¦¦ ¦¦           ¦¦    ¦¦    ¦¦   ¦¦ ¦¦      ¦¦    ¦¦ ¦¦    ¦¦ ¦¦  ¦¦ ¦¦    ¦¦    \n");
    printf("¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦    ¦¦    ¦¦   ¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦   ¦¦¦¦    ¦¦    \n");
    printf("                                                                                      \n");
    printf(" 																					  \n");
	
	
	
	int pratos[7], i, sum = 0; // vetor para guardar pratos por dia e soma total
	
	// vetor de strings com os dias da semana
	const char *dias[7] ={
	"Domingo", "Segunda", "Terca", "Quarta",
    "Quinta", "Sexta", "Sabado"
	};
	
	float media = 0; // variável para guardar a média
	
	// entrada de dados: lê pratos vendidos em cada dia
	for (i = 0; i < 7; i++){
		printf("Digite quantos pratos vendeu %s : ", dias[i]);
		scanf("%d", &pratos[i]);
		
		sum += pratos[i]; // acumula para calcular a média
	}
	
	// cálculo da média
	media = sum / 7;
	
	// saída organizada em forma de tabela
	printf("\n");
	printf("===============================================================\n");
	
	// imprime os nomes dos dias
	for (i = 0; i < 7; i++){
		printf("%s\t", dias[i]);
	}
	printf("  Media\n"); // coluna da média
	
	// imprime os valores de pratos vendidos
	for (i = 0; i < 7; i++){
		printf("%d\t", pratos[i]);
	}
	
	// imprime a média final no final da tabela
	printf("%.2f\n", media);
	
	printf("===============================================================");
	
	return 0; // fim do programa
}


















                                                                                      
                                                                                      

