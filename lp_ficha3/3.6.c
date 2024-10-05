#include <stdio.h>

int main() {
	
	float temperatura;
	
	printf("---------- Temperatura ---------- \n");
	
	printf("Insere a temperatura: ");
	scanf("%f", &temperatura);

	if (temperatura <= 10)
	{
		printf("Muito Frio");
	}
	else if (temperatura >= 10 && temperatura <= 20)
	{
		printf("Frio");
	}
	else if (temperatura >= 20 && temperatura <= 25)
	{
		printf("Ameno");
	}
	else if (temperatura >= 25 && temperatura <= 30)
	{
		printf("Quente");
	}
	else if (temperatura >= 30)
	{
		printf("Muito Quente");
	}

	return 0;
}