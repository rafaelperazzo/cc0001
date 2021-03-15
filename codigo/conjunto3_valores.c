/*
 Faça um programa que leia vários conjuntos de três valores reais e 
 mostre para cada conjunto: sua soma, seu produto e sua média. 
 O programa para quando o conjunto não estiver com seus valores em ordem crescente.
*/
#include <stdio.h>
int main () {

    float numero1, numero2, numero3;
    float soma,produto,media;
    
    do {
        printf("Digite o numero 1: ");
        scanf("%f",&numero1);
        printf("Digite o numero 2: ");
        scanf("%f",&numero2);
        printf("Digite o numero 3: ");
        scanf("%f",&numero3);

        soma = numero1+numero2+numero3;
        produto = numero1*numero2*numero3;
        media = soma/3.0;
        
        printf("%f\n",soma);
        printf("%f\n",produto);
        printf("%f\n",media);

    } while ((numero1<numero2)&&(numero2<numero3));
    return 0;
}