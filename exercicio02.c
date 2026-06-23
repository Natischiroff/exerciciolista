// Nome: Natalia Schiroff
// Turma: 3° Técnico
// Exercício: 02

#include <stdio.h>

int main()
{
    float nota1;
    float nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media: %.2f\n", media);

    if (media >= 6)
    {
        printf("Aprovado\n");
    }
    else if (media >= 4 && media < 6)
    {
        printf("Recuperacao\n");
    }
    else
    {
        printf("Reprovado\n");
    }

    return 0;
}
