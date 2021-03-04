#include <stdio.h>

int main() {

    int n;
    //1) PEDIR n
    printf("Digite o valor de n: ");
    scanf("%d",&n);

    //Buscar divisores e colocar em um somatório
    int soma = 0;
    int i;
    for (i=1;i<n;i++) {
        //Se o i ([2,n-1]) divide n, somar o divisor i
        if (n%i==0) {
            printf("%d\n",i);
            soma = soma + i;
        }

    }

    if (soma==n) {
        printf("PERFEITO!");
    }
    else {
        printf("NAO PERFEITO");
    }

    return 0;

}
