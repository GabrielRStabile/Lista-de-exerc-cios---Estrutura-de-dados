#include <stdio.h>
#include <stdlib.h>

int russa(int a , int b){
  if (a == 1){
    return b;
  }
  else if ( a > 1 && a % 2 == 0){
    return russa(a/2, b * 2);
  }
  else if (a > 1 && a % 2 != 0){
    return b  + russa(a/2, b * 2);
  }

  return 0;
}

int main(void) {

  int a , b , Mult;


  printf("Informe o primeiro numero:");
  scanf("%d",&a);
  printf("Informe o segundo numero:");
  scanf("%d",&b);

  Mult = russa(a , b);

  printf("A Multiplicação é igual a %d",Mult);

}