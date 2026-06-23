// Nome: Natalia Schiroff
// Turma: 3º Técnico
// Exercicio: 07

#include <stdio.h>

int main()
{
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura < 15)
    {
        printf("Frio\n");
    }
    else if (temperatura <= 29)
    {
        printf("Agradavel\n");
    }
    else
    {
        printf("Quente\n");
    }

    return 0;
}