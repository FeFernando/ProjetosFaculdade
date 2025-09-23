#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int choice ;
	
	printf("Digite um dia da semana de 1-7: \n");
	scanf("%d", &choice);
	
	switch (choice){
		case 1:
			printf("Dia 1 eh domingo!");
			break;
		case 2:
			printf("Dia 2 eh segunda!");
			break;
		case 3:
			printf("Dia 3 eh terça!");
			break;
		case 4:
			printf("Dia 4 eh quarta!");
			break;
		case 5:
			printf("Dia 5 eh quinta!");
			break;
		case 6:
			printf("Dia 6 eh sexta!");
			break;
		case 7:
			printf("Dia 7 eh sabado");
			break;
			
	}
	return 0;
}
