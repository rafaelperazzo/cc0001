
#include <stdio.h>

int main() {

    //SEU CÓDIGO: Não utilize acentos, cedilha ou ~

    int n;

    printf("Digite n: ");
    scanf("%d",&n);

    int i;

    int idade;
    float altura,mediaidade=0,peso,maispesado=0,maisalto=0;


    for (i=1;i<=n;i++) {
        printf("Digite a idade: ");
        scanf("%d",&idade);

        printf("Digite o peso: ");
        scanf("%f",&peso);

        printf("Digite a altura: ");
        scanf("%f",&altura);

        if (altura>maisalto) {
            maisalto = altura;
        }
        if (peso>maispesado) {
            maispesado=peso;
        }
        mediaidade = mediaidade + idade;
    }

    mediaidade = mediaidade/n;

    printf("%f\n",maisalto);
    printf("%f\n",maispesado);
    printf("%f\n",mediaidade);

    return 0;
}
