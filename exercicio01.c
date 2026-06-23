// Nome: Natalia Schiroff
// Turma: 3° Técnico
// Exercício: 01

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade <= 11)
    {
        printf("Crianca\n");
    }
    else if (idade >= 12 && idade <= 17)
    {
        printf("Adolescente\n");
    }
    else if (idade >= 18 && idade <= 59)
    {
        printf("Adulto\n");
    }
    else
    {
        printf("Idoso\n");
    }

    return 0;
}
