#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float soma;
	float num;
	
	while (num != 0){
		printf("Digite um numero: ");
		scanf("%f", &num);
		soma += num;
	}
	
	printf("A soma de todos numeros digitados eh %.2f", soma);
	
	
	return 0;
}
