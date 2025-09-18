#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float salario, porcentagem, reajuste;
	
	printf("Digite o valor atual do salario: ");
	scanf("%f", &salario);
	printf("Digite a porcentagem de aumento");
	scanf("%f", &porcentagem);
	
	reajuste = (porcentagem / 100) * salario;
	
	printf ("O valor do reajuste foi %.2f o salario final é %.2f", reajuste, (reajuste+salario));
	
	return 0;
}
