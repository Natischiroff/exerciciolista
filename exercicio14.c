// Nome: Natalia Schiroff
// Turma: 3° Técnico
// Exercício: 14

#include <stdio.h>

int main() {

    int faltas;
    float media;

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 6 && faltas <= 10) {
        printf("Aprovado\n");
    }
    else if (media < 6 && faltas <= 10) {
        printf("Reprovado por nota\n");
    }
    else if (media >= 6 && faltas > 10) {
        printf("Reprovado por faltas\n");
    }
    else {
        printf("Reprovado por nota e faltas\n");
    }

    return 0;
}