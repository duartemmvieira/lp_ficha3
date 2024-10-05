#include <stdio.h>

int main() {
	
	int numero;

	printf("Escolhe um numero: ");
	scanf("%d", &numero);

	if (numero >= 10 && numero <= 50)
	{
		printf("O numero pertence ao intervalo [10, 50]!");
	}
	else
	{
		printf("O numero nao pertence ao intervalo [10, 50]!");
	}

	return 0;

}