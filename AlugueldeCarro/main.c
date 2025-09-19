#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float km;
	int dias;
	
	printf("Quantos dias ficou com o carro?: ");
	scanf("%d", &dias);
	printf("Quantos quilometros andou? :");
	scanf("%f", &km);
	printf("Voce ficou %.2d dias e andou %.2f quilometros a conta ficou %.2f", dias, km, ((dias*60)+(km*0.15)));
	
	return 0;
}
