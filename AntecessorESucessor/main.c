#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, ante, suce; 
	
	printf("Digite um numero");
	scanf("%d", &num);
	
	ante = num - 1;
	suce = num + 1;
	
	printf("O numero depois de %d é %d\n", num, suce);
	printf("O numero antes de %d é %d\n", num, ante);
	
	return 0;
}
