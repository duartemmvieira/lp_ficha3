#include <stdio.h>

int main() {
	
	float n1, n2, n3, exame, nf;

	printf("Insira as notas das avaliacoes: \n");
	printf("- ficha 1: ");
	scanf("%f", &n1);
	printf("- ficha 2: ");
	scanf("%f", &n2);
	printf("- ficha 3: ");
	scanf("%f", &n3);
	printf("- exame: ");
	scanf("%f", &exame);

	nf = 0.2 * n1 + 0.2 * n2 + 0.2 * n3 + 0.4 * exame;

	printf("A tua nota final e: %f valores", nf);

	return 0;
}