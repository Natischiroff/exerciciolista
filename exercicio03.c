// Nome: Natalia Schiroff
// Turma: 3° Técnico
// Exercício: 03

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("Positivo\n");
    }
    else if (numero < 0)
    {
        printf("Negativo\n");
    }
    else
    {
        printf("Zero\n");
    }

    if (numero % 2 == 0)
    {
        printf("Par\n");
    }
    else
    {
        printf("Impar\n");
    }

    return 0;
}
