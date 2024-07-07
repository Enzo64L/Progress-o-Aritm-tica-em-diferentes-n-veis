#include <stdio.h>

int main()
{
    int an, a1, r, n;
    
    printf("===Calculadora de PA===\n");
    printf("Insira a razão da sua PA:\n ");
    scanf("%i",&r);
    printf("Insira o primeiro elemento da sua PA:\n ");
    scanf("%i",&a1);
    printf("Insira a posição do elemento que deseja descobrir na PA:\n ");
    scanf("%i",&n);
    
    an = a1+((n-1)*r);
    
    printf("Seu elemento desejado é: %i",an);
    
}