#include <stdio.h>
int main() {

    int n;
    //1) Pedir o valor de n
    printf("Digite o valor de n: ");
    scanf("%d",&n);

    //2) Inicializar o menor
    int menor;
    printf("Digite um numero: ");
    scanf("%d",&menor);

    //3) Montar a repetição
    int i;
    int numero;
    for (i=1;i<n;i++) {
        printf("Digite um numero: ");
        scanf("%d",&numero);
        if (numero<menor) {
            menor = numero;
        }
    }

    printf("%d\n",menor);


    return 0;
}
