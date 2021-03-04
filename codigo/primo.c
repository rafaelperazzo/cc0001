#include <stdio.h>

int main() {

    int n;

    //1) Pedir o valor de n
    printf("Digite o valor de n: ");
    scanf("%d",&n);

    //2) Montar repetição de 2 até n-1
    int cont = 0;
    int i;
    for (i=2;i<n;i++) {
        //Verificando se i divide n, para cada valor de i
        if (n%i==0) {
            cont++;
        }
    }
    //Baseado na contagem dos divisores do intervalo, decidir se é ou não primo!!
    if (cont==0) {
        printf("PRIMO");
    }
    else {
        printf("NAO PRIMO");
    }


    return 0;
}
