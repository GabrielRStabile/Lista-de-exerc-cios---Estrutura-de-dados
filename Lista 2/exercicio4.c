
#include <stdio.h>
#include <stdlib.h>

int mdc(int primeiroNumero, int segundoNumero);

int adda(void) {
  int* primeiroNumero, *segundoNumero;

  primeiroNumero = malloc(sizeof(int));
  segundoNumero = malloc(sizeof(int));

  printf("Qual o numero será descoberto o maximo divisor comum? ");
  scanf("%d", primeiroNumero);
  printf("entre qual outro numero? ");
  scanf("%d", segundoNumero);

  printf("O máximo divisor comum entre %d e %d é %d", *primeiroNumero, *segundoNumero, mdc(*primeiroNumero, *segundoNumero));
}

int mdc(int primeiroNumero, int segundoNumero){
  if (segundoNumero == 0) return primeiroNumero;
  return mdc(segundoNumero, primeiroNumero % segundoNumero);
}