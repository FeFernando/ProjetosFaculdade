#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int soma = 0;
	
	for (int i = 0; i <=100; i++){
		soma += i;
	}
	
	printf("A soma dos 100 primeiros numeros inteiros eh %d\n", soma );
	return 0;
}
