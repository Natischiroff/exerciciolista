// Nome: Natalia Schiroff
// Turma: 3º Técnico
// Exercicio: 05

#include <stdio.h>

int main()
{
    int senha;
    int nivel;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha == 2026)
    {

        printf("Digite o nivel do usuario: ");
        scanf("%d", &nivel);

        if (nivel == 1)
        {
            printf("Aluno\n");
        }
        else if (nivel == 2)
        {
            printf("Professor\n");
        }
        else if (nivel == 3)
        {
            printf("Administrador\n");
        }
        else
        {
            printf("Nivel invalido\n");
        }
    }
    else
    {
        printf("Acesso negado\n");
    }

    return 0;
}