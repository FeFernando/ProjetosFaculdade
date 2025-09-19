#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor, reajuste, novo_valor;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valor);
	
	reajuste = (valor/100) * 5;
	novo_valor = reajuste + valor;
	printf("O valor do produto %.2f com 5% de reajuste foi para ", valor);
	printf("%.2f", novo_valor);
	
	
	return 0;
}
