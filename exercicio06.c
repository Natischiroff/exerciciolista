// Nome: Natalia Schiroff
// Turma: 3º Técnico
// Exercicio: 06

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c)
    {
        printf("Ha valores repetidos\n");
    }

    if (a >= b && a >= c)
    {
        printf("Maior numero: %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Maior numero: %d\n", b);
    }
    else
    {
        printf("Maior numero: %d\n", c);
    }

    return 0;
}