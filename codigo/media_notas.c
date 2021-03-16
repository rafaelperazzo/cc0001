#include <stdio.h>

float media (float n1, float n2, float n3, char LETRA) {


    if (LETRA=='A') {
        float ma = (n1+n2+n3)/3;
        return (ma);
    }
    else if (LETRA=='P') {
        float mp = (n1*5+n2*3+n3*2)/10;
        return (mp);
    }
    else {
        return (0);
    }

}


int main() {

    //ENTRADA
    float n1,n2,n3;
    printf("Digite n1: ");
    scanf("%f",&n1);

    printf("Digite n2: ");
    scanf("%f",&n2);

    printf("Digite n3: ");
    scanf("%f",&n3);

    char letra;
    printf("Digite a letra (A - Aritmetica, P - Ponderada)");
    scanf("%s",&letra);

    //PROCESSAMENTO CHAMANDO A FUNÇÃO
    float MEDIA;
    MEDIA = media(n1,n2,n3,letra);

    //SAÍDA

    printf("Media: %.5f\n",MEDIA);

    return 0;
}
