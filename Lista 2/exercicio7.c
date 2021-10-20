#include <stdio.h>
#include <stdlib.h>

int hailstone(int n){
  if(n == 1){
    return 0;
  }
  else if (n % 2 == 0){
    return n + hailstone(n/2);
  }
  else if (n % 2 != 0){
    return n + hailstone((n * 3) + 1);
  }
  return 0;
}


int main(void) {
  int n ;
  
  printf("Informe o primeiro numero da sequencia:");
  scanf("%d",&n);

 
    n = hailstone(n);
    printf("Somatorio dos 6 primeiros termos %d ", n);
  
}