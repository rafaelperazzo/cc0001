#include <stdio.h>

int main() {
    
    //ENTRADA
    int n;
    printf("Digite a quantidade de numeros: ");
    scanf("%d",&n);
    
    int i;
    float somatorio = 0;
    float media;
    float numero;
    
    for (i=1;i<=n;i++) {
        //1.1. Pedir um numero
        printf("Digite um numero: ");
        scanf("%f",&numero);
        //1.2. Colocar numero no somatorio
        somatorio = somatorio + numero;
    }
    
    media = somatorio/(float)n;
    
    printf("Media: %f\n",media);
    
    
    return 0;
}