//5. Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: sexo, idade e quantidade de livros que leu no ano de 2006.
//Faça um programa que leia os dados digitados pelo usuário, sendo que deverão ser solicitados dados até que a idade digitada seja um valor negativo.
//Depois, calcule e imprima:
//a) A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
//b) A quantidade de mulheres que leram 5 livros ou mais.
//c) A média de idade dos homens que leram menos que 5 livros.
//d) O percentual de pessoas que não leram livros.

#include <stdio.h>

int main() {
  int sexo, id, livro;
  int total_livro_menor_10 = 0;
  int m_ler_5_ou_mais = 0;
  int soma_id_h_menos_5_livro = 0;
  int total_h_menos_5_livro = 0;
  int total_pessoa = 0;
  int total_nao_livro = 0;

  while (1) {
    printf("Digite o sexo (1 para homem, 2 para mulher, 0 para sair): ");
    scanf("%d", &sexo);

    if (sexo == 0) {
      break;
    }

    printf("Digite a idade: ");
    scanf("%d", &id);

    printf("Digite a quantidade de livros lidos em 2006: ");
    scanf("%d", &livro);

    if (id < 10) {
      total_livro_menor_10 += livro;
    }

    if (sexo == 2 && livro >= 5) {
      m_ler_5_ou_mais++;
    }

    if (sexo == 1 && livro < 5) {
      soma_id_h_menos_5_livro += id;
      total_h_menos_5_livro++;
    }

    if (livro == 0) {
      total_nao_livro++;
    }

    total_pessoa++;
    }

    float media_id_h_menos_5_livro = (float)soma_id_h_menos_5_livro / total_h_menos_5_livro;
    float percent_nao_livro = (float)total_nao_livro / total_pessoa * 100;

    printf("\nTotal de livros lidos por menores de 10 anos: %d\n", total_livro_menor_10);
    printf("Mulheres que leram 5 livros ou mais: %d\n", m_ler_5_ou_mais);
    printf("Média de idade de homens que leram menos que 5 livros: %.2f\n", media_id_h_menos_5_livro);
    printf("Percentual de pessoas que não leram livros: %.2f%%\n", percent_nao_livro);

    return 0;
}
