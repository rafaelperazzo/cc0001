#include <stdio.h>

int main () {

    int n;
    //1) Solicitar valor de n
    printf("Digite o valor de n: ");
    scanf("%d",&n);

    //2) Calcular a tabuada de n
    int i = 1;
    while (i<=10) {
        printf("%d\n",n*i);
        i++;
    }

    //ALTERNATIVA COM FOR
    for (i=1; i<=10; i++ ) {
        printf("%d\n",n*i);
    }

    return 0;
}
