#include <stdio.h>

int main() {

    //ENTRADA
    int a,b;

    printf("Digite a: ");
    scanf("%d",&a);

    printf("Digite b: ");
    scanf("%d",&b);

    //PROCESSAMENTO
    int i; //POSSÍVEL DIVISOR
    int divisor = 1;
    for (i=1;i<=b;i++) {
        if ((b%i==0)&&(a%i==0)) { //Divisor comum
            divisor = i;
        }
    }
    if (divisor==1) {
        printf("SIM");
    }
    else {
        printf("NAO");
    }

    return 0;
}
