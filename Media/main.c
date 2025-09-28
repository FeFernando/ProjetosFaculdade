#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota, media, soma = 0;
	int i;
	
	
	for (i = 0; i < 4; i++){
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		
		while(nota < 0 || nota >10){
			printf("Nota invalida digite novamente: ");
			scanf("%f", &nota);
		}
		
		soma += nota;
		
		
	};
	media = soma / 4;
	printf("A media das notas do aluno é: %.2f\n ", media);
	
	
	return 0;
}
