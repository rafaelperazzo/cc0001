/*
Escreva um programa para gerar os n primeiros termos da seqüência: 
1 1 2 3 5 8 13 21 34 55 89 …

*/

#include <stdio.h>

int main() {

    int n;
    printf("Digite a quantidade de termos: ");
    scanf("%d",&n);

    int anterior1 = 1;
    int anterior2 = 1;
    int an;
    int i;
    
    for (i=3;i<=n;i++) {

        an = anterior1+anterior2;
        anterior1=anterior2;
        anterior2=an;
        printf("%d\n",an);

    }

    return 0;
}