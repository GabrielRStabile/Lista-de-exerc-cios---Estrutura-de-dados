#include <stdio.h>
#include <stdlib.h>

int dasda(void) {
  float* numero1, * numero2;

  numero1 = (float*) malloc(sizeof(float));

  numero2 = (float*) malloc(sizeof(float));

  printf("Qual o primeiro número real?\n");
  scanf("%f", numero1);

  printf("Qual o segundo número real?\n");

  scanf("%f", numero2);

  printf("A soma entre %f e %f é %f", *numero1, *numero2, (*numero1 + *numero2));

  free(numero1);
  free(numero2);
  return 0;
}