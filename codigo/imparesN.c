#include <stdio.h>

int main () {


    int n;
    //1) Pedir n
    printf("Digite n:");
    scanf("%d",&n);
    int i;
    //Montar repetição com i de 1 até (n-1)
    for (i=1;i<n;i++) {
        //Caso i seja ímpar (resto da divisão por 2 igual a 1 ou diferente de 0, mostrar
        if ((i%2)!=0) {
            printf("%d\n",i);
        }

    }

    return 0;
}
