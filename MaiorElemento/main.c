#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num[5] = {1, 5, 4, 8, 2},
		maior = num[0], 
		i;
	
	for (i = 1; i < 5; i++){
		if (num[i] > maior){
			maior = num[i];
			}
	}
	printf("O maior elemento eh %d", maior);
	return 0;
}
