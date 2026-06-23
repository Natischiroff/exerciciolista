// Nome: Natalia Schiroff
// Turma: 3° Técnico 
// Exercício: exemplo

#include <stdio.h>
    int main(){
        int idade;
        float nota;

        printf("Digite sua idade");
        scanf("%f",&idade);
        printf("Digite sua nota");
        scanf("%f",&nota);
        if(idade >=18 && nota >=6){
            printf("Aluno maior de idade e aprovado. \n");
        }else if(idade < 18 && nota >=6){
            printf("Aluno menor de idade e aprovado. \n");
        } else {
            printf("Aluno reprovado. \n");
        }
        return 0;
    }