#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char palavra_certa[] = "cachorro";
	char user_word[50] ;
	
	printf("Digite a palavra certa: ");
	scanf("%s", user_word);
	
	if (strcmp(palavra_certa, user_word)==0){
		printf("Palavras iguais");
	} else {
		printf("Palavra errada");
	}
	
	
	return 0;
}
