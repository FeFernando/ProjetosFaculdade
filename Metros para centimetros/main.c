#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float metros;
	float conversao;
	
	printf("Digite quantos metros voce quer converter em centimetros: ");
	scanf("%f", &metros);
	
	conversao = (metros * 100);
	
	printf("%.2f é igual a %.2f  centimetros.", metros, conversao);
	
	
	return 0;
}
