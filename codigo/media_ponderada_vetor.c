#include <stdio.h>
float somaValoresPesos(float valores[],float pesos[], int n) {
    float soma = 0;
    int i;

    for (i=0;i<n;i++) {
        soma = soma + valores[i]*pesos[i]; 
    }
    return (soma);
}

float somaPesos(float pesos[],int n) {
    float soma = 0;
    int i;
    for (i=0;i<n;i++) {
        soma = soma + pesos[i];
    }
    return (soma);
}

int main() {

    //ENTRADA DA QUANTIDADE DE NÚMEROS
    int n;
    printf("Digite a quantidade de numeros: ");
    scanf("%d",&n);
    //DECLARAÇÃO DOS VETORES
    float valores[n];
    float pesos[n];
    int i;
    //ENTRADA DOS VETORES
    for (i=0;i<n;i++) {
        printf("Digite o valor %d:",i);
        scanf("%f",&valores[i]);
        printf("Digite o peso %d:",i);
        scanf("%f",&pesos[i]);
    }
    //PROCESSAMENTO CHAMANDO AS FUNÇÕES
    float numerador;
    numerador = somaValoresPesos(valores,pesos,n);
    float denominador;
    denominador = somaPesos(pesos,n);
    float resultado;
    resultado = numerador/denominador;

    //SAÍDA
    printf("%.5\n",resultado);

    return 0;

}