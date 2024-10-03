#include <stdio.h>

int main() {
    float peso;
    char sexo;

    printf("Introduza o seu sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Introduza o seu peso (em kg): ");
    scanf("%f", &peso);

    if (sexo == 'M' || sexo == 'm') {
        if (peso <= 50) {
            printf("O seu estado atual é: Muito Magro\n");
        }
        else if (peso <= 60) {
            printf("O seu estado atual é: Magro\n");
        }
        else if (peso <= 80) {
            printf("O seu estado atual é: Saudável\n");
        }
        else if (peso <= 90) {
            printf("O seu estado atual é: Gordo\n");
        }
        else {
            printf("O seu estado atual é: Muito Gordo\n");
        }
    }
    else if (sexo == 'F' || sexo == 'f') {
        if (peso <= 40) {
            printf("O seu estado atual é: Muito Magra\n");
        }
        else if (peso <= 50) {
            printf("O seu estado atual é: Magra\n");
        }
        else if (peso <= 65) {
            printf("O seu estado atual é: Saudável\n");
        }
        else if (peso <= 80) {
            printf("O seu estado atual é: Gorda\n");
        }
        else {
            printf("O seu estado atual é: Muito Gorda\n");
        }
    }
    else {
        printf("Sexo inválido. Por favor, introduza 'M' para Masculino ou 'F' para Feminino.\n");
    }

    return 0;
}