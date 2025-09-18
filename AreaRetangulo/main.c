#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float base, altura, resultado;
	
	printf("Digite o tamanho da base: \n");
	scanf("%f", &base);
	printf("Digite o tamanho da altura: \n");
	scanf("%f", &altura);
	
	resultado = base * altura;
	
	printf("A area desse retrangulo é: %f ", resultado);
	
}
