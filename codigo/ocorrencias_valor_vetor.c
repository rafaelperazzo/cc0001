/*
Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma.
Exemplo: n = 8
Seqüência: -1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7
Saída:   	-1.7 ocorre 3 vezes
               3.0 ocorre 1 vez
               0.0 ocorre 2 vezes
               1.5 ocorre 1 vez
               2.3 ocorre 1 vez
*/

int quantasVezes(float numero, float vetor[],int n) {
    int i;
    int contador = 0;
    for (i=0;i<n;i++) {
        if (vetor[i]==numero) {
            contador++;
        }
    }
    return (contador);
}

int jaExiste(float numero, float vetor[], int n) {
    int i;
    for (i=0; i<n;i++) {
        if (vetor[i]==numero) {
            return(1);
        }
    }
    return (0);
}

int gerarVetorSemRepeticao(float original[],float resultado[],int n) {
    int tamanho = 0;
    int i;
    for (int i=0;i<n;i++) {
        if (jaExiste(original[i],resultado,tamanho)==0) {
            resultado[tamanho] = original[i];
            tamanho++;
        }
    }
    return (tamanho);
}

void lerVetor(float vetor[],int n,char nome) {
    int i;
    for (i=0;i<n;i++) {
        printf("Digite o elemento %c[%d]: ",nome,i);
        scanf("%f",&vetor[i]);
    }
}

#include <stdio.h>

int main() {

    //ENTRADA
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d",&n);
    float a[n],b[n];
    lerVetor(a,n,'A');
    //PROCESSAMENTO
    int tamanho = gerarVetorSemRepeticao(a,b,n);
    int i;
    int repeticoes;
    for (i=0;i<tamanho;i++) {
        repeticoes = quantasVezes(b[i],a,n);
        printf("O numero %f aparece %d vezes\n",b[i],repeticoes);
    }

    return 0;
}