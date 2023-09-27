#include <stdio.h>

int main() {
  int id;
  float valor, percentual, novo_valor;
  int prod_acima_100 = 0;
  float soma_valor_sem_aumento = 0.0;
  float maior_valor_com_aumento = 0.0;

  do {
    printf("Informe o ID do produto (ou '0' para encerrar): ");
    scanf("%d", &id);

    if (id == 0) {
      break;
    }

    printf("Informe o valor do produto: ");
    scanf("%f", &valor);

    printf("Informe o percentual de aumento (em %%): ");
    scanf("%f", &percentual);

    novo_valor = valor + (valor * percentual / 100);

    printf("Novo valor do produto: %.2f\n", novo_valor);

    if (novo_valor > 100.00 && percentual > 5.0) {
      prod_acima_100++;
    }

    if (percentual == 0.0) {
      soma_valor_sem_aumento += valor;
    }

    if (novo_valor > maior_valor_com_aumento) {
      maior_valor_com_aumento = novo_valor;
    }
  } while (id != 0);

printf("Quantidade de produtos mais caros que R$ 100,00 após aumento e com aumento superior a 5%%: %d\n", prod_acima_100);

if (prod_acima_100 > 0) {
  printf("Valor do produto mais caro (após aumento): %.2f\n", maior_valor_com_aumento);
}

if (soma_valor_sem_aumento > 0.0) {
  float media_valor_sem_aumento = soma_valor_sem_aumento / prod_acima_100;
  printf("Média de valor dos produtos que não sofreram aumento: %.2f\n", media_valor_sem_aumento);
  }
  return 0;
}