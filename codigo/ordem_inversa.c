/*
Dada uma seqüência de n números inteiros, imprimi-la na ordem 
inversa à da leitura.
*/
#include <stdio.h>
int main() {
    int n; //entrada
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int numeros[n];
    //Entrar com os elementos do vetor
    int i;
    for (i=0;i<n;i++) {
        printf("Digite o elemento %d",i);
        scanf("%d",&numeros[i]);
    }
    //Mostrar na ordem inversa
    for (i=n-1;i>=0;i--) {
        printf("[%d]\n",numeros[i]);
    }
    return 0;
}