#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *arquivo;
	
	arquivo = fopen("dados.txt", "w");
	
	char nome[30];
	int idade;
	printf("Digite o nome: ");
	scanf("%s", nome);
	printf("Digite a idade: ");
	scanf("%d", idade);
	while(fprintf(arquivo, "%s %d", nome , &idade) == 2);{
		printf("Nome: %s Idade: %d", nome, idade);
	}
	
	
	fclose(arquivo);
	return 0;
}
