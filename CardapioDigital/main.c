#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	// Variáveis de controle
	int categoria, pratos, bebidas, sobremesas;
	int qtd_pratos = 0, qtd_bebidas = 0, qtd_sobremesas = 0;
	
	// Matrizes de strings para armazenar os itens escolhidos
	char pratos_selecionado[10][30], bebidas_selecionada[10][30], sobremesas_selecionada[10][30];
	
	// Variável para acumular o valor total do pedido
	float valor = 0;
	
	do {
		// Menu principal
		printf("====== CARDAPIO DIGITAL ======\n");
		printf("Escolha uma categoria:\n 1 - Pratos \n 2 - Bebidas \n 3 - Sobremesas \n 4 - Sair \n");
		scanf("%d", &categoria);
	
		// Estrutura switch para cada categoria
		switch (categoria) {
			case 1: 
				// Submenu de pratos
				printf("Escolha um prato: \n");
				printf(" 1 - File Mignon R$10,50 \n 2 - Bife Acebolado R$21,00 \n 3 - Figado de Ganso R$35,90 \n");
				scanf("%d", &pratos);
				
				// Verifica qual prato foi escolhido e armazena
				if (pratos == 1){
					strcpy(pratos_selecionado[qtd_pratos++], "File-Mignon - 10,50");
					valor += 10.50;
				} else if (pratos == 2) {
					strcpy(pratos_selecionado[qtd_pratos++], "Bife-Acebolado - 21,00");
					valor += 21;
				}else if (pratos == 3) {
					strcpy(pratos_selecionado[qtd_pratos++], "Figado-de-Ganso - 35,90");
					valor += 35.90;
				} else {
					printf("Valor selecionado foi invalido\n");
				}
				printf ("Prato escolhido foi: %s \n", pratos_selecionado[qtd_pratos -1]);
				break;
				
			case 2:
				// Submenu de bebidas
				printf("Escolha uma bebida: \n");
				printf(" 1 - Martine R$12,50 \n 2 - Vinho Seco R$32,00 \n 3 - Cerveja R$7,50\n");
				scanf("%d", &bebidas);
				
				// Verifica qual bebida foi escolhida e armazena
				if (bebidas == 1){
					strcpy(bebidas_selecionada[qtd_bebidas++], "Martine - 12,50");
					valor += 12.50;
					
				}else if (bebidas == 2) {
					strcpy(bebidas_selecionada[qtd_bebidas++], "Vinho Seco - 32,00");
					valor += 32;
					
				}else if (bebidas == 3){
					strcpy(bebidas_selecionada[qtd_bebidas++], "Cerveja - 7,50");
					valor += 7.50;
				} else {
					printf ("Opcao incorreta !\n");
				}
				
				printf("Bebida escolhida foi : %s\n", bebidas_selecionada[qtd_bebidas -1]);
				break;
				
			case 3:
				// Submenu de sobremesas
				printf("Escolha uma sobremesa : \n 1 - Pudim R$9,45 \n 2 - Torta R$12,00 \n 3 - Mousse R$8,00 \n");
				scanf("%d", &sobremesas);
				
				// Verifica qual sobremesa foi escolhida e armazena
				if (sobremesas == 1){
						strcpy(sobremesas_selecionada[qtd_sobremesas++], "Pudim - 9,45");
						valor += 9.45;
				}else if (sobremesas == 2){
						strcpy(sobremesas_selecionada[qtd_sobremesas++], "Torta - 12,00");
						valor += 12;
				}else if (sobremesas == 3){
						strcpy(sobremesas_selecionada[qtd_sobremesas++], "Mousse - 8,00");
						valor += 8;
				}else {
					printf("Opção invalida\n");
				}
				
				printf("A sobremesa escolhida foi %s\n", sobremesas_selecionada[qtd_sobremesas -1]);
				break;
		}
   } while (categoria != 4 ); // Continua até o usuário escolher "Sair"
   
   // Resumo do pedido
   printf("=====OS PEDIDOS FORAM=====\n");
   
   // Exibe pratos escolhidos
   if (qtd_pratos > 0){
   		printf("\nPratos:\n");
   		int i;
   		for (i = 0; i < qtd_pratos; i++){
   			printf("- %s\n", pratos_selecionado[i]);
	    }
   }
   
   // Exibe bebidas escolhidas
   if (qtd_bebidas > 0) {
        printf("\nBebidas:\n");
        int i;
        for (i = 0; i < qtd_bebidas; i++) {
            printf(" - %s\n", bebidas_selecionada[i]);
        }
   }
    
   // Exibe sobremesas escolhidas
   if (qtd_sobremesas > 0){
    	printf("\nSobremesas:\n");
    	int i;
    	for (i = 0; i < qtd_sobremesas; i++){
    		printf("- %s\n", sobremesas_selecionada[i]);
		}
	}
    
    // Exibe o valor total do pedido
    if (valor > 0){
    	printf("O pedido ficou em: R$%.2f\n", valor);
	}
   
	return 0;
}

