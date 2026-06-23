// Nome: Natalia Schiroff
// Turma: 3º Técnico
// Exercicio: 08

#include <stdio.h>

int main() {
float salario;
float aumento;
float novoSalario;

printf("Digite o salario: ");
scanf("%f", &salario);

if (salario <= 2000) {
aumento = salario * 0.15;
} else if (salario <= 5000) {
aumento = salario * 0.10;
} else {
aumento = salario * 0.05;
}

novoSalario = salario + aumento;

printf("Salario atual: R$ %.2f\n", salario);
printf("Aumento: R$ %.2f\n", aumento);
printf("Novo salario: R$ %.2f\n", novoSalario);

return 0;
}