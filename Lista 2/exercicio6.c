#include <stdio.h>
#include <stdlib.h>


float percurso(float h , float r){
  if(h < 0.001){
    return 0;
  }
  else if (h > 0){
    return h + (h * r) + percurso(h - (h * r), r);
  }
  return 0;
}

int main(void) {

  float h , r , Perc;

  printf("Informe a altura:");
  scanf("%f",&h);

  printf("Informe o coeficiente de amortecimento:");
  do{
  scanf("%f",&r);
  if (r < 0 || r > 1){
    printf("Numero invalido, respeite o intervao 0 < r < 1: ");
  }
  }while(r < 0 || r > 1);

  Perc = percurso(h , r);

  printf("A distância percorrida pela bola é de %.2f ud. ", Perc);
}