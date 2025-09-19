#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor, salario, parcelas, porcentagem;
	int anos, meses;
	
	printf("Digite o valor da casa: ");
	scanf("%f", &valor);
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	printf("Em quantos anos pretende pagar a casa?: ");
	scanf("%d", &anos);
	
	meses = anos * 12;
	parcelas = valor / meses;
	porcentagem = salario * 0.3;
	
	if (parcelas > porcentagem)
		printf("Valor excedido, financiamento negado");
	else
		printf("30% do salario eh %.2f e as parcelas ficaram %.2f\n", porcentagem, parcelas);
		printf("Financiamento concedido");
	
	
	return 0;
}
