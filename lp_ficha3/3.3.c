#include <stdio.h>

int main() {
	char estado;
	
	printf(" Estado civil [sS ,cC ,vV ,dD]: ");
	scanf("%c", &estado);
	
	printf("- Estado civil : ");
	switch (estado) {
	
	case 's':
	case 'S': printf(" Solteiro \n"); break;
	
	case 'c':
	case 'C': printf(" Casado \n"); break;
	
	case 'v':
	case 'V': printf(" Viuvo \n"); break;
	
	case 'd':
	case 'D': printf(" Divorciado \n"); break;
	
	default:
		printf(" Invalido !\n");
	}
}