#include <stdio.h>
void imprimeVetor(int vetor[], int tamanho) {
    int i;
    for (i=0;i<tamanho;i++) {
        printf("%d\n",vetor[i]);
    }
}
int main() {
    int contador = 0;
    int vetor[contador];
    int i;
    for (i=0;i<=4;i++) {
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
        contador++;
    }
    imprimeVetor(vetor,contador);
    return 0;
}
