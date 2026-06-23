// Nome: Natalia Schiroff
// Turma: 3º Técnico
// Exercicio: 11

#include <stdio.h>

int main() {
    int op;
    float n1;
    float n2;
    float resultado;

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
    scanf("%d", &op);

    switch(op) {
    case 1:
    resultado = n1 + n2;
    printf("Resultado: %.2f", resultado);
    break;

    case 2:
    resultado = n1 - n2;
    printf("Resultado: %.2f", resultado);
    break;

    case 3:
    resultado = n1 * n2;
    printf("Resultado: %.2f", resultado);
    break;

    case 4:
    if (n2 != 0) {
    resultado = n1 / n2;
    printf("Resultado: %.2f", resultado);
    } else {
    printf("Nao e possivel dividir por zero");
    }
    break;

    default:
    printf("Opcao invalida");
    }

    return 0;
}
