#include <stdio.h>

int main() {
  int codigo, horas_trabalhadas, num_dependentes;
  float salario_bruto, desconto_inss, desconto_ir, salario_liquido;

  printf("Digite os dados dos funcionários:\n");

  for (int i = 0; i < 10; i++) {
    printf("Funcionário %d\n", i + 1);
    printf("Código: ");
    scanf("%d", &codigo);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("Número de dependentes: ");
    scanf("%d", &num_dependentes);

    salario_bruto = (horas_trabalhadas * 12) + (num_dependentes * 40);
    desconto_inss = salario_bruto * 0.085;
    desconto_ir = salario_bruto * 0.05;
    salario_liquido = salario_bruto - desconto_inss - desconto_ir;

    printf("Código do funcionário: %d\n", codigo);
    printf("Desconto INSS: %.2f\n", desconto_inss);
    printf("Desconto IR: %.2f\n", desconto_ir);
    printf("Salário líquido: %.2f\n", salario_liquido);
  }

  return 0;
}
