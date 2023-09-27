//3. Faça um programa que solicite ao usuário 10 números inteiros e, ao final, informe a quantidadede números ímpares e pares lidos. 
//Calcule também a soma dos números pares e a média dos números ímpares.

#include <stdio.h>

int main() {
  int numero;
  int numerosPares = 0;
  int numerosImpares = 0;
  int somaPares = 0;
  double mediaImpares = 0.0;

  printf("Digite 10 números inteiros:\n");

  for (int i = 0; i < 10; i++) {
    printf("Digite o número %d: ", i + 1);
    scanf("%d", &numero);

    if (numero % 2 == 0) {
      numerosPares++;
      somaPares += numero;
    } else {
        numerosImpares++;
        mediaImpares += numero;
    }
  }

  if (numerosImpares > 0) {
    mediaImpares /= numerosImpares;
  }

  printf("Quantidade de números pares: %d\n", numerosPares);
  printf("Quantidade de números ímpares: %d\n", numerosImpares);
  printf("Soma dos números pares: %d\n", somaPares);
  printf("Média dos números ímpares: %.2lf\n", mediaImpares);

  return 0;
}
