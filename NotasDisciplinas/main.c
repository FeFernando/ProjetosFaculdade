#include <stdio.h>
#include <stdlib.h>
#define num_aluno 4
#define num_disciplina 3 

int main(int argc, char *argv[]) {
	
	float soma, media, notas[num_disciplina][num_aluno];
	int i, j ;
	for (i = 0; i < num_aluno; i++){
		printf("Digite a nota para o aluno %d: \n", i+1);
			for (j = 0; j < num_disciplina; j++){
				printf("Digite a nota para a disciplina %d: ", j+1);
				scanf("%f", &notas[j][i]);
			}
		
	}

	printf("============ Boletim Geral ====================\n");
	printf("Aluno   ");
	for (j = 0; j < num_disciplina; j++){
		printf("Disc%d \t\t", j+1);
		}
	printf("\n");	
	
	for (i = 0; i < num_aluno; i++){
		printf("Aluno %d ", i+1);
		for (j = 0; j < num_disciplina; j++){
			printf("%6.2f\t\t", notas[j][i]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
