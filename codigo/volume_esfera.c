#include <stdio.h>

float volume(float raio) {

    float v;
    float pi = 3.14159;
    v = (4/3)*pi*raio*raio*raio;
    return(v);

}


int main() {

    //ENTRADA
    float r;
    printf("Digite o raio: ");
    scanf("%f",&r);

    //PROCESSAMENTO CHAMANDO A FUNÇÃO
    float v;
    v = volume(r);

    //SAÍDA
    printf("Volume da esfera: %.5f\n",v);

    return 0;
}
