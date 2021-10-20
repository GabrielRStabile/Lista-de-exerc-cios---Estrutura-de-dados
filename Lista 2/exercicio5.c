#include <stdio.h>
#include <stdlib.h>

int proximoPrimo(int primo){

  int num = primo + 1, resultado = 2;

  if(num == 3){
    return num;
  }

  do{
    for (int i = 2; i <= num/2; i++) {
    if (num % i == 0) {
       resultado = 1;
       num++;
       break;
    }
    else resultado = 0;
    }
  }while(resultado!= 0);
  return num;
}


int mmc(int a , int b , int primo){
  if(a == 1 && b == 1){
    return 1;
  }
  else if ( a % primo == 0 && b % primo == 0){
    return primo * mmc(a/primo, b/primo, primo);
  }
  else if(a % primo != 0 && b % primo != 0){
    return mmc(a, b, proximoPrimo(primo));
  }
  else if ( a % primo == 0 && b % primo != 0){
    return primo * mmc(a/primo, b, primo);
  }
  else if(a % primo != 0 && b % primo == 0){
    return primo * mmc(a, b/primo, primo);
  }
  return 0;
}




int main(void) {
  int primo = 2 , a , b , MMC;

  printf("Informe o primeiro Numero Natural:");

  do{
    scanf("%d",&a);
    if(a<0){
      printf("Este numero não é Natural,digite outro:");
    }
  }while(a<0);

  printf("Informe o segundo Numero Natural:");

  do{
    scanf("%d",&b);
    if(b<0){
      printf("Este numero não é Natural,digite outro:");
    }
  }while(b<0);


  MMC = mmc(a, b , primo);

  printf("O MMC de %d e %d é igual a %d" , a , b ,MMC);
  
}