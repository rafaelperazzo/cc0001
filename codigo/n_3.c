#include <stdio.h>

int main() {

    //Solicitar o n ao usuário
    int n;
    printf("Digite o valor de n: ");
    scanf("%d",&n);


    //Calcular o primeiro ímpar
    int primeiro;
    primeiro = (n*n)-n+1;

    int soma = primeiro;

    int proximo = primeiro + 2;

    int i = 1;
    printf("%d\n",primeiro);
    for (i=1; i<=(n-1);i++) {
        soma = soma + proximo;
        printf("%d\n",proximo);
        proximo = proximo + 2;
    }

    printf("Soma: %d\n",soma);

    return 0;
}
