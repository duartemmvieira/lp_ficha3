#include <stdio.h>

int main() {

	float nota;
	int repeat = 1;

	while (repeat == 1) {
		printf("Introduz a tua nota: ");
		scanf("%f", &nota);

		if (nota >= 9.5 && nota <= 20)
		{
			printf("Situacao: Aprovado\n");
		}
		else if (nota >= 0 && nota <= 9.5)
		{
			printf("Situacao: Reprovaste\n");
		}
		else
		{
			printf("Introducao invalida\n");
		}

		printf("Deseja continuar? (1 para sim, 0 para nao): ");
		scanf("%d", &repeat);
	}

	return 0;
}