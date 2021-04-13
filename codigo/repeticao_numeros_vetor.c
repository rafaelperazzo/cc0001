#include <stdio.h>


int existe(float numero, float vetor[], int tamanho) {
    int i;
    for (i=0;i<tamanho;i++) {
        if (numero==vetor[i]) {
            return (1);
        }
    }
    return (0);
}

int gerarVetorSemRepeticao(float original[], float semRepeticao[], int n) {

    int tamanho = 0;
    int i;
    for (i=0; i<n;i++) {
        if (existe(original[i],semRepeticao,tamanho)==0) {
            semRepeticao[i] = original[i];
            tamanho++;
        }
    }
    return (tamanho);
}

int quantasVezes(float numero, float vetor[], int n) {
    int i;
    int cont = 0;
    for (i=0;i<n;i++) {
        if (numero==vetor[i]) {
            cont++;
        }
    }
    return (cont);
}

void lerVetor(float vetor[],int n,char nome) {
    int i;
    for (i=0;i<n;i++) {
        printf("Digite o elemento %c[%d]: ",nome,i);
        scanf("%f",&vetor[i]);
    }
}

int main() {

    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d",&n);
    float original[n],semRepeticao[n];

    //ENTRADA
    lerVetor(original,n,'O');

    //PROCESSAMENTO
    int tamanho;
    tamanho = gerarVetorSemRepeticao(original,semRepeticao,n);

    //SAIDA
    int i;
    int cont;
    for (i=0;i<tamanho;i++) {
        cont = quantasVezes(semRepeticao[i],original,tamanho);
        printf("%.5f ocorre %d vezes\n",semRepeticao[i],cont);
    }
    return 0;
}