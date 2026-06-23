// Nome: Natalia Schiroff
// Turma: 3° Técnico
// Exercício: 15

#include <stdio.h>

int main() {

    int bateria;

    printf("Digite o nivel da bateria (0 a 100): ");
    scanf("%d", &bateria);

    if (bateria < 0 || bateria > 100) {
        printf("Valor invalido\n");
    }
    else if (bateria < 15) {
        printf("Bateria critica\n");
    }
    else if (bateria <= 29) {
        printf("Bateria baixa\n");
    }
    else if (bateria <= 79) {
        printf("Bateria normal\n");
    }
    else {
        printf("Bateria cheia\n");
    }

    return 0;
}