#include <stdio.h>
#include <stdlib.h>

int isPerfect(int* numero);

int dada(void) {
  int* numero;

  numero = (int*) malloc(sizeof(int));

  printf("Qual o número devo verificar se é perfeito? ");

  scanf("%d", numero);

  if(isPerfect(numero)) { 
    printf("%d é um número perfeito", *numero);
  } else {
    {printf("%d não é um número perfeito", *numero);
  }
  
  return 0;
}}

int isPerfect(int* numero) {
  int* soma;

  soma = (int*) malloc(sizeof(int));

  *soma = 1;

  for(int contador = 2; contador < *numero; contador++) {
    if(*numero%contador == 0) *soma += contador;
  }
  
  if (*soma == *numero) {free(soma); return 1;}

  free(soma);
  return 0;
}