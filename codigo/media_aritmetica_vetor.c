#include <stdio.h>

float media(float vetor[], int tamanho) {
    float soma = 0;
    int i;
    for (i=0;i<tamanho;i++) {
        soma = soma + vetor[i];
    }

    float media;
    media = soma/tamanho;
    return (media);
}

void lerVetor(float vetor[], int tamanho) {

    int i;
    for (i=0;i<tamanho;i++) {
        printf("Digite o elemento %d: ",i);
        scanf("%f",&vetor[i]);
    }

}

int main() {

    //DECLARAÇÃO DE VARIÁVEIS
    int n;
    printf("Digite o tamanho: ");
    scanf("%d",&n);

    //Declarar o vetor
    float numeros[n];
    lerVetor(numeros,n);

    //Calcular a media
    float ma = media(numeros,n);

    //Saída
    printf("%f\n",ma);

    return 0;
}