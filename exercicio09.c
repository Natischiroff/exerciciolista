// Nome: Natalia Schiroff
// Turma: 3º Técnico
// Exercicio: 09

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 16)
    {
        printf("Entrada proibida\n");
    }
    else if (idade <= 17)
    {
        printf("Entrada permitida com responsavel\n");
    }
    else
    {
        printf("Entrada liberada\n");
    }

    return 0;
}