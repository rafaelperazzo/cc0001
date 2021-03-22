#include <stdio.h>

int divisores(int n) {

    int cont = 0;
    int i;

    for (i=1; i<=n;i++) {

        if (n%i==0) {
            cont++;
        }

    }

    return (cont);

}


int main() {

    //ENTRADA
    int numero;
    printf("Digite o valor de n: ");
    scanf("%d",&numero);

    //PROCESSAMENTO CHAMANDO A FUNÇÃO
    int qtde_divisores;
    qtde_divisores = divisores(numero);

    //SAIDA
    printf("%d",qtde_divisores);

    return 0;
}
