#include <stdio.h>

int main() {
  int quant_resp_10 = 0;
  float idade_soma = 0.0;
  int total_pessoas = 0;
  int percent_op_baixa = 0;
  int id_pessoa_mais_velha = -1;
  int maior_idade = -1;

  for (int i = 1; i <= 200; i++) {
    int idade, identificador, opiniao;
    printf("Digite a idade da pessoa %d: ", i);
    scanf("%d", &idade);

    if (idade > maior_idade) {
      maior_idade = idade;
      id_pessoa_mais_velha = i;
    }

    printf("Digite o identificador da pessoa %d: ", i);
    scanf("%d", &identificador);

    printf("Digite a opinião da pessoa %d (de 0 a 10): ", i);
    scanf("%d", &opiniao);

    if (opiniao == 10) {
      quant_resp_10++;
    }

    idade_soma += idade;
    total_pessoas++;

    if (opiniao <= 5) {
      percent_op_baixa++;
    }
  }

  float media_idades = idade_soma / total_pessoas;
  float percent_op_baixa_final = (float)percent_op_baixa / total_pessoas * 100;

  printf("\nQuantidade de respostas 10: %d\n", quant_resp_10);
  printf("Média de idade das pessoas que responderam o questionário: %.2f\n", media_idades);
  printf("Percentagem de nota 5 ou menos na opinião da peça: %.2f%%\n", percent_op_baixa_final);
  printf("Identificador da pessoa mais velha: %d\n", id_pessoa_mais_velha);

  return 0;
}
