#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int vetor[4] = {3, 5, 8, 1};
	int i, j, aux;
	int n = 4;
	
	printf("Vetor desordenado :");
	
		for ( i = 0; i < 4; i++){
			printf(" %d ", vetor[i]);
		}
		
	printf("\n");
	
		for (i = n - 1; i > 0; i--){
			for(j = 0; j < i; j++){
				if (vetor[j] > vetor[j + 1]){
					aux = vetor[j];
					vetor[j] = vetor[j + 1];
					vetor[j + 1] = aux; 				
				}
			}
		}
		
	printf("Vetor ordenado :");
	
		for ( i = 0; i < 4; i++){
			printf(" %d ", vetor[i]);
		}
	return 0;
}
