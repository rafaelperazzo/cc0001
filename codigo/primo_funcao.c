#include <stdio.h>

int primo(int n) {

    int cont = 0;
    int i; //Possíveis divisores de n
    for (i=2;i<n;i++) {
        if (n%i==0) {
            cont++;
            break;
        }
    }

    if (cont==0) {
        return (1); //retorna verdadeiro (1)
    }
    else {
        return (0); //retorna falso (0)
    }

}


int main() {

    //ENTRADA
    int numero;
    printf("Digite o numero: ");
    scanf("%d",&numero);

    if (primo(numero)==1) {
        printf("PRIMO");
    }
    else {
        printf("NAO PRIMO");
    }

    return 0;

}
