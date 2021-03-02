
#include <stdio.h>

int main () {

    //1) Pedir o valor de n

    int n;

    printf("Digite o valor de n: ");
    scanf("%d",&n);

    //2) Inicializar a variável maior
    int maior = 0;

    //3) Montar a repetição para repetir n vezes
    int i;
    for (i=1;i<=n;i++) {
        //o que fazer n vezes ?
        int numero;
        printf("Digite um numero: ");
        scanf("%d",&numero);
        if (numero>maior) {
            maior = numero;
        }
    }

    printf("%d\n",maior);

    return 0;
}
