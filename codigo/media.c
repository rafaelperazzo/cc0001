#include <stdio.h>

int main () {

    //1) Pedir o valor de n
    int n;
    printf("Digite n: ");
    scanf("%d",&n);

    //2) Pedir cada um dos n valores, e colocar em um somatorio
    float soma=0;
    int i;
    float numero;
    for (i=1; i<=n; i++) {
        printf("Digite um numero: ");
        scanf("%f",&numero);
        soma = soma + numero;
    }

    printf("%f",soma/(float)n);

    return 0;

}
