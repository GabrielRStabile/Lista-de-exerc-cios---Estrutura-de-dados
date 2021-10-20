/*
Multiplicacao por somas sucessivas. Escreva uma funcao recursiva que realiza a multiplicacao de dois numeros inteiros por meio da estrategia de somas sucessivas.
*/

#include <stdio.h>
#include <stdlib.h>

int mult(int *a, int *b);

int val(void) {
  int* nPrimeiro, *nSegundo;

  nPrimeiro = malloc(sizeof(int));
  nSegundo = malloc(sizeof(int));

  printf("Qual o primeiro número à ser multiplicado? ");
  scanf("%d", nPrimeiro);
  printf("E o segundo número? ");
  scanf("%d", nSegundo);

  printf("\nA multiplicação entre %d e %d é %d", *nPrimeiro, *nSegundo, mult(nPrimeiro, nSegundo));

  return 0;
}

int mult(int *a, int *b){
  if (*b == 0) return 0;
  (*b)--;
  if (*b >= 0) return (*a + mult(a, b));
}