#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int subtrair(int a, int b){
	int res = a - b;
	return res;
}

int main(int argc, char *argv[]) {
	
	int num1 = 12;
	int num2 = 5;
	int total = subtrair(num1, num2);
	printf("Primeiro numero eh %d\n", num1);
	printf("Segundo numero eh  %d\n", num2);
	printf("A subtracao dos dois eh %d", total);
	
	return 0;
}
