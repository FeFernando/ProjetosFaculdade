#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeros[] = {5, 3, 8, 7, 4};
	int tamanho = sizeof(numeros) / sizeof(numeros[0]);
	int soma = 0;
	
	for (int i = 0; i < tamanho; i++){
		soma += numeros[i];
	}
	
	float media = (float)soma / tamanho;
	printf("A media dos elementos do array eh %.2f\n", media);
	
	return 0;
}
