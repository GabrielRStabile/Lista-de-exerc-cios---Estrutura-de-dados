#include <stdio.h>
#include <stdlib.h>

int main () {
    void *num1, *num2, *result;
    int type;
    printf("Qual será o tipo de dado cadastrado?\n1- Inteiro\n2- Real: ");
    scanf("%d", &type);
    
    switch (type)
    {
    case 1:
        num1 = (int *)malloc(sizeof(int));
        num2 = (int *)malloc(sizeof(int));
        result = (int *)malloc(sizeof(int));
        
        printf("Digite o numero 1: ");
        scanf("%d", ((int*)num1));
        printf("Digite o numero 2: ");
        scanf("%d", ((int*)num2));
        *((int*)result) = *((int*)num1) + *((int*)num2);
        printf("Resultado = %d", *((int*)result));
        break;
    
    case 2:
        num1 = (float *) malloc(sizeof(float));
        num2 = (float *) malloc(sizeof(float));
        result = (float *) malloc(sizeof(float));
        printf("Digite o numero 1: ");
        scanf("%f", ((float*)num1));
        printf("Digite o numero 2: ");
        scanf("%f", ((float*)num2));
        *((float*)result) = *((float*)num1) + *((float*)num2);
        printf("Resultado = %.2f", *((float*)result));

    default:
        break;
    }
}
