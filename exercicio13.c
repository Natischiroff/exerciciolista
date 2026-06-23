// Nome: Natalia Schiroff
// Turma: 3° Técnico
// Exercício: 13

#include <stdio.h>

int main() {

    int codigo, quantidade;
    float preco, total;
    char produto[20];

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (codigo == 1) {
        preco = 2.50;
        printf("Produto: Caneta\n");
    }
    else if (codigo == 2) {
        preco = 15.00;
        printf("Produto: Caderno\n");
    }
    else if (codigo == 3) {
        preco = 120.00;
        printf("Produto: Mochila\n");
    }
    else if (codigo == 4) {
        preco = 1.50;
        printf("Produto: Lapis\n");
    }
    else {
        printf("Erro: codigo invalido.\n");
        return 0;
    }

    total = preco * quantidade;

    printf("Quantidade: %d\n", quantidade);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}