#include <stdio.h>

int main() {
  int num;
  int soma = 0;
  int quant = 0;

  printf("Digite valores inteiros positivos. Digite um número negativo ou zero para encerrar.\n");

  while (1) {
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 0) {
      break;
    }

    soma += num;
    quant++;
    }

    if (quant > 0) {
      double media = (double)soma / quant;
      printf("A média dos números positivos é: %.2lf\n", media);
    } else {
        printf("Nenhum número positivo foi digitado.\n");
    }
    return 0;
}
