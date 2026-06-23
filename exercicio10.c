// Nome: Natalia Schiroff
// Turma: 3º Técnico
// Exercicio: 10

#include <stdio.h>

int main() {
    float valor;
    float total;
    int pagamento;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("1-Dinheiro\n2-Debito\n3-Credito\n");
    scanf("%d", &pagamento);

    if (pagamento == 1) {
    total = valor * 0.90;
    } else if (pagamento == 2) {
    total = valor * 0.95;
    } else if (pagamento == 3) {
    total = valor;
    } else {
    printf("Opcao invalida");
    return 0;
    }

    printf("Valor final: R$ %.2f", total);

    return 0;
}