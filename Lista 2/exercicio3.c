/* Ocorrencias do digito k em um numero natural n. Escreva uma funcao recursiva que retorne a quantidade de ocorrencias do digito k em um dado numero natural n. */

#include <stdio.h>
#include <stdlib.h>

int ocorrencia(int *digito, int *numero);

int ked(void) {
  int* digito, *numero;

  digito = malloc(sizeof(int));
  numero = malloc(sizeof(int));

  printf("Qual o numero será analisado a ocorrencia? ");
  scanf("%d", numero);
  printf("E o qual será o dígito buscado? ");
  scanf("%d", digito);

  printf("O digito %d no número %d aparece %dx", *digito, *numero, ocorrencia(digito, numero));
}

int ocorrencia(int *digito, int *numero){
  if (*numero == 0 && *digito !=0) return 0;
  if (*numero % 10 == *digito) { *numero /= 10; return 1 + ocorrencia(digito, numero);}
  return 1;
}