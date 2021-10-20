/*
SomaSucessorAntecessor. Considere um sistema num ́erico que nao tenha a operacao de adicao implementada e que tal sistema dispoe somente das fun coes sucessor e antecessor. Com base nestas duas funcoes, escreva uma funcao recursiva soma(x,y) em C que calcule a soma de dois numeros inteiros (x e y) utilizando somente as duas funcoes mencionadas. Implemente tambem as funcoes sucessor e antecessor, as quais podem utilizar o operador de adicao. 
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int *x, int *y);
int* sucessor(int *x);
int* antecessor(int *y);

int ds(void) {
  int *nPrimeiro, *nSegundo;

  nPrimeiro = malloc(sizeof(int));
  nSegundo = malloc(sizeof(int));

  printf("Qual o primeiro número à ser somado? ");
  scanf("%d", nPrimeiro);
  printf("E o segundo número? ");
  scanf("%d", nSegundo);

  printf("\nA soma entre %d e %d é %d", *nPrimeiro, *nSegundo, soma(nPrimeiro, nSegundo));

  return 0;
}

int soma(int* x, int* y){
  if (*y == 0) return *x;
  
  sucessor(x);
  antecessor(y);
  return soma(x,y);
}

int* sucessor(int *x){
  (*x)++;
  return x;
}

int* antecessor(int *y){
  (*y)--;
  return y;
}
