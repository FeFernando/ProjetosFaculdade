#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int pratos[7], i, sum = 0;
	
	const char *dias[7] ={
	"Domingo", "Segunda", "Terca", "Quarta",
    "Quinta", "Sexta", "Sabado"
	};
	
	float media = 0;
	
	
	for (i = 0; i < 7; i++){
		printf("Digite quantos pratos vendeu %s : ", dias[i]);
		scanf("%d", &pratos[i]);
		
		sum += pratos[i];
	}
	
	media = sum / 7;
	
	printf("A media de pratos vendidos na semana e de : %.2f", media);
	
	
	
	
	return 0;
}
