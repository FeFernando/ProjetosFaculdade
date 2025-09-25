#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int categoria, pratos, bebidas, sobremesas, qtd_pratos = 0, qtd_bebidas = 0, qtd_sobremesas = 0;
	char pratos_selecionado[10][30], bebidas_selecionada[10][30], sobremesas_selecionada[10][30];
	float valor = 0;
	
	do {
	printf("====== CARDAPIO DIGITAL ======\n");
	printf("Escolha uma categoria:\n 1 - Pratos \n 2 - Bebidas \n 3 - Sobremesas \n 4 - Sair \n");
	scanf("%d", &categoria);
	
	switch (categoria) {
		case 1: 
			printf("Escolha um prato: \n");
			printf(" 1 - File Mignon R$10,50 \n 2 - Bife Acebolado R$21,00 \n 3 - Figado de Ganso R$35,90 \n");
			scanf("%d", &pratos);
			
			if (pratos == 1){
				strcpy(pratos_selecionado[qtd_pratos++], "File-Mignon");
				valor += 10.50;
			} else if (pratos == 2) {
				strcpy(pratos_selecionado[qtd_pratos++], "Bife-Acebolado");
				valor += 21;
			}else if (pratos == 3) {
				strcpy(pratos_selecionado[qtd_pratos++], "Figado-de-Ganso");
				valor += 35.90;
			} else {
				printf("Valor que foi selecinado foi invalido");
			}
			printf ("Prato escolhido foi: %s \n", pratos_selecionado[qtd_pratos -1]);
			break;
		case 2:
			printf("Escolha uma bebida: \n");
			printf("1 - Martine \n 2 - Vinho Seco \n 3 - Cerveja\n");
			scanf("%d", &bebidas);
			
			if (bebidas == 1){
				strcpy(bebidas_selecionada[qtd_bebidas++], "Martine");
				
			}else if (bebidas == 2) {
				strcpy(bebidas_selecionada[qtd_bebidas++], "Vinho Seco");
				
			}else if (bebidas == 3){
				strcpy(bebidas_selecionada[qtd_bebidas++], "Cerveja");
			} else {
				printf ("Opcao incorreta !");
			}
			
			printf("Bebida escolhida foi : %s ", bebidas_selecionada[qtd_bebidas -1]);
			break;
		case 3:
			printf("Escolha uma sobremesa : \n 1 - Pudim \n 2 - Torta \n 3 - Mousse \n");
			scanf("%d", &sobremesas);
			
			if (sobremesas == 1){
			
					strcpy(sobremesas_selecionada[qtd_sobremesas++], "Pudim");
					
			}else if (sobremesas == 2){
				
					strcpy(sobremesas_selecionada[qtd_sobremesas++], "Torta");
					
			}else if (sobremesas == 3){
			
					strcpy(sobremesas_selecionada[qtd_sobremesas++], "Mousse");
				
			}else {
				printf("Opção invalida");
			}
			
			printf("A sobremesa escolhida foi %s\n", sobremesas_selecionada[qtd_sobremesas -1]);
			break;
	}
   } while (categoria != 4 );
   
   printf("=====OS PEDIDOS FORAM=====\n");
   
   
   if (qtd_pratos > 0){
   		printf("\n Pratos \n");
   		int i;
   		for (i = 0; i < qtd_pratos; i++){
   		printf("- %s\n", pratos_selecionado[i]);
	   }
   	
   }
   
   
    if (qtd_bebidas > 0) {
        printf("\nBebidas:\n");
        int i;
        for (i = 0; i < qtd_bebidas; i++) {
            printf(" - %s\n", bebidas_selecionada[i]);
        }
    }
    
    
    if (valor > 0){
    	printf("O pedido ficou em: R$%.2f", valor);
	}
   
	return 0;
}
