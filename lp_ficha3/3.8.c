#include <stdio.h>

int main() {
	
	float tp, ee, ac, nf;

	printf("Indique as suas notas: \n");
	
	printf("- Trabalho Pratico: ");
	scanf("%f", &tp);

	printf("- Exame Ecrito: ");
	scanf("%f", &ee);

	printf("- Avaliacao Continua: ");
	scanf("%f", &ac);

	nf = 0.3 * tp + 0.5 * ee + 0.2 * ac;

	printf("Nota Final: %f \n", nf);

	if (nf >= 0 && nf <= 9.5)
	{
		printf("Reprovado");
	}
	else if (nf >= 9.5 && nf <= 20)
	{
		printf("Aprovado");
	}
	else
	{
		printf("Impossivel");
	}

	return 0;
}