#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void exibirMenu(){
	printf("\n==== Banco Digital ====\n");
	printf("1 - Consultar Saldo\n");
	printf("2 - Depositar\n");
    printf("3 - Sacar\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
}

int main(int argc, char *argv[]) {
	int opcao;
	float saldo = 1000;
	float valor;
	
	
	do {
		exibirMenu();
		scanf("%d", &opcao);
		
		switch (opcao){
			case  1:
				printf("Seu saldo bancario eh de %.2f", saldo);
				break;
			case 2:
				printf("Digite o valor que desesa depositar: ");
				scanf("%f", &valor);
				saldo += valor;
				printf("Valor depositado com sucesso seu saldo foi para R$%.2f \n", saldo );
				break;
			case 3:
				printf("Qual o valor que quer sacar ? ");
				scanf("%f", &valor);
				saldo -= valor;
				printf("Voce sacou R$%.2f e ficou com o saldo de R$%.2f \n", valor, saldo);
				break;
		}
	}
	
	while (opcao != 4);
	
	return 0;
	
	
}
