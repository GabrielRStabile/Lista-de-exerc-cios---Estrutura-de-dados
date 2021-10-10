#include <stdio.h>
#include <stdlib.h>

typedef struct tPessoa{
  int idade;
  char nome[128];
} Pessoa;

typedef void (*Callback) (Pessoa[], int);
void InformartPessoa(int nPessoa, Pessoa *vetor, Callback callback);
void cadastrarPessoa(int nPessoa, Pessoa *vetor, Callback callback);
void listarMenores(Pessoa *vetor , int nPessoa);

int main(void) {
  int nPessoa;
  Pessoa *vetor;
 
  printf("Quantas pessoas serão cadastradas? ");
  scanf("%d", &nPessoa);

  vetor = (Pessoa *) malloc(nPessoa * sizeof(Pessoa));
  
  cadastrarPessoa(nPessoa, vetor, listarMenores);
}

void cadastrarPessoa(int nPessoa, Pessoa *vetor, Callback callback){

  for(int i = 0; i < nPessoa; i++){
    printf("\nQual é o nome: ");
    scanf("%s", vetor[i].nome);

    printf("Qual é a idade: ");
    scanf("%d", &vetor[i].idade);
  }

  callback(vetor, nPessoa);
}

void listarMenores(Pessoa *vetor , int nPessoa){
  printf("\nPessoas menores de 18 anos:\n");
  for(int i = 0; i < nPessoa; i++){
    if(vetor[i].idade < 18){
      printf("Nome :%s\n" , vetor[i].nome);
      printf("Idade :%d\n \n",vetor[i].idade);
    }
  }
}
