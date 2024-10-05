#include <stdio.h>

int main() {
    int dependentes;
    float abono;

    printf("Introduza o numero de dependentes: ");
    scanf("%d", &dependentes);

    switch (dependentes) {
    case 1:
        abono = 50.0;
        break;
    case 2:
        abono = 90.5;
        break;
    case 3:
        abono = 170.7;
        break;
    default:
        if (dependentes > 3) {
            abono = 170.7 + (dependentes - 3) * 20.3;
        }
        else {
            printf("Numero de dependentes invalido.\n");
            return 1;
        }
        break;
    }

    printf("O abono mensal e de %.2f euros.\n", abono);

    return 0;
}