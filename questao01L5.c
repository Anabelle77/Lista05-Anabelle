#include <stdio.h>

int main() {
  int num = 1;
  double den = 1.0;
  double S = 0.0;
  
  while (num <= 99 && den <= 50) {
    S += num / den;
    num += 2;
    den++;
  }
  printf("O valor de S é: %.2lf\n", S);
  return 0;
}