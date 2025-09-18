#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, i, res;
	
	printf("Digite o numero que voce quer ver a tabuada: ");
	scanf("%d", &num);
	
	for (i = 10; i > 1; i-- ){
		printf("%d x %d = %d\n", num, i, (num * i));
	}
	
	return 0;
}
