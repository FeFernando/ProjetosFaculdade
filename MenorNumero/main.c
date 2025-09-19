#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, maior;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	maior = n1;
	

	if (n2 > n1 & n2 > n3)
		maior = n2;
	else if (n3 > n1 & n3 > n2)
		maior = n3 ;
		
	printf("O maior numero eh %d\n", maior);
	return 0;
}
