#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade;
	
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	
	if ( idade >= 5 && idade <= 10 )
		printf("Categoria infantil");
	else if (idade >=11 && idade <=17 )
		printf("Categoria juvenil");
	else if (idade > 18)
		printf("Categoria adulto");
	else 
		printf("Categoria não existente para idade");
	return 0;
}
