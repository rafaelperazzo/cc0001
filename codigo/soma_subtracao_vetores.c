/*
Escreva um programa que dados 2 vetores de tamanho n, fornecidos pelo usuário, 
calcule a soma e a subtração dos dois vetores. 

*/
#include <stdio.h>

//a e b são dados de entrada. c vai ser a soma. 
void soma(float a[],float b[],float c[],int n) {
    int i;
    for (i=0;i<n;i++) {
        c[i] = a[i] + b[i];
    }
}

void subtracao(float a[], float b[],float c[],int n) {
    int i;
    for (i=0;i<n;i++) {
        c[i] = a[i]-b[i];
    }
}

void imprimirVetor(float vetor[], int n,char nome) {
    int i;
    for (i=0; i<n;i++) {
        printf("%c[%d]=%.5f\n",nome,i,vetor[i]);
    }
}

void lerVetor(float vetor[],int n,char nome) {
    int i;
    for (i=0;i<n;i++) {
        printf("Digite o elemento %c[%d]: ",nome,i);
        scanf("%f",&vetor[i]);
    }
}

int main() {
    //DECLARACAO DE VARIAVEIS
    int n;
    printf("Digite a quantidade de elementos:");
    scanf("%d",&n);
    float a[n],b[n],v1[n],v2[n]; //v1 soma; v2 subtracao
    //ENTRADA
    lerVetor(a,n,'A');
    lerVetor(b,n,'B');
    //PROCESSAMENTO CHAMANDO AS FUNÇÕES
    soma(a,b,v1,n);
    subtracao(a,b,v2,n);
    //SAÍDA
    imprimirVetor(v1,n,'X');
    imprimirVetor(v2,n,'Y');
    return 0;
}