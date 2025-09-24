#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int categoria, pratos, bebidas, sobremesas;
	char pratos_selecionado[50], bebidas_selecionada[50], sobremesas_selecinada[50];
	
	do {
	printf("====== CARDAPIO DIGITAL ======\n");
	printf("Escolha uma categoria:\n 1 - Pratos \n 2 - Bebidas \n 3 - Sobremesas \n 4 - Sair \n");
	scanf("%d", &categoria);
	
	switch (categoria) {
		case 1: 
			printf("Escolha um prato: \n");
			printf("1 - File Mignon \n 2 - Bife Acebolado \n 3 - Figado de Ganso \n");
			scanf("%d", &pratos);
			
			if (pratos == 1){
				strcpy(pratos_selecionado, "File-Mignon");
			
			} else if (pratos == 2) {
				strcpy(pratos_selecionado, "Bife-Acebolado");
				
			}else if (pratos == 3) {
				strcpy(pratos_selecionado, "Figado-de-Ganso");
			} else {
				printf("Valor que foi selecinado foi invalido");
			}
			printf ("Prato escolhido foi: %s ", pratos_selecionado);
			break;
		case 2:
			printf("Escolha uma bebida: \n");
			printf("1 - Martine \n 2 - Vinho Seco \n 3 - Cerveja");
			scanf("%d", &bebidas);
			
			if (bebidas == 1){
				strcpy(bebidas_selecionada, "Martine");
				
			}else if (bebidas == 2) {
				strcpy(bebidas_selecionada, "Vinho Seco");
				
			}else if (bebidas == 3){
				strcpy(bebidas_selecionada, "Cerveja");
			} else {
				printf ("Opcao incorreta !");
			}
			
			printf("Bebida escolhida foi : %s ", bebidas_selecionada);
			break;
	}
   } while (categoria != 4 );
	return 0;
}
