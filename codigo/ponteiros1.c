#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dobra_variavel(int *var)
{
    *var = (*var) * 2;
}

void mostraVetor(int *vetor,int tamanho) {


    int i;
    for (i=0;i<tamanho;i++) {
        printf("%d\n",vetor[i]);
    }

}

int main() {

    int num = 10;
    dobra_variavel(&num);
    printf("%d\n",num);

    //Vetor como ponteiros
    int *vetor;
    int n = 5;
    vetor = malloc(n* sizeof(int));
    vetor[0] = 1;
    vetor[1] = 2;
    mostraVetor(vetor,2);
    free(vetor);

    /*
    int *p1;
    float *p2;
    int n;
    p1 = &n;
    n = 10;
    printf("%d\n",*p1);
    */
}
