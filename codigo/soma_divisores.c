#include <stdio.h>

int positivo(int n) {
    if (n>0) {
        return (1);
    }
    else {
        return (0);
    }
}


int somaDivisores(int n) {

    int soma = 0;
    int i;
    for (i=1;i<n;i++) {
        if (n%i==0) {
            soma = soma + i;
        }
    }
    return (soma);

}

int main() {

    //DECLARAÇÃO DE VARIÁVEIS
    int numero;
    int i;
    int resultado;
    //ENTRADA E SAIDA
    for (i=1;i<=5;i++) {
        printf("Digite um numero: ");
        scanf("%d",&numero);
        if (positivo(numero)) {
            resultado = somaDivisores(n);
            printf("%d\n",resultado);
        }
        else {
            printf("Numero nao e positivo!!\n");
        }
    }

    return 0;
}