// Nome: Natalia Schiroff
// Turma: 3º Técnico
// Exercicio: 04

#include <stdio.h>

int main()
{
    float valor;
    float desconto;
    float total;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor <= 100)
    {
        desconto = 0;
    }
    else if (valor <= 500)
    {
        desconto = valor * 0.10;
    }
    else
    {
        desconto = valor * 0.20;
    }

    total = valor - desconto;

    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", total);

    return 0;
}