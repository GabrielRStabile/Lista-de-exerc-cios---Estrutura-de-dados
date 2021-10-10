#include "stdio.h"
#include "stdlib.h"

int qualMaior(int *vetor, int *quantidade);

int dadas(void) {
  int *pNumeros, *quantidade;

  quantidade = (int*) malloc(sizeof(int));

  printf("Quantos números serão adicionados? ");
  scanf("%d", quantidade);

  pNumeros = (int*) malloc(sizeof(int) * *quantidade);

  for(int i = 0; i < *quantidade; i++) {
    printf("Qual o valor na posição %d? ", i + 1);
    scanf("%d", &pNumeros[i]);
  }

  printf("O maior número do vetor é %d", qualMaior(pNumeros, quantidade));

  free(quantidade);
  free(pNumeros);
  return 0;
}

int qualMaior(int *vetor, int *quantidade) {
  int *temp;
  temp = (int*) malloc(sizeof(int));
  *temp = -32768;

  for(int i = 0; i < *quantidade; i++) {
    if (*temp < vetor[i]) *temp = vetor[i];
  }
  return *temp;
}