#include <stdio.h>

void calc_esfera(float R, float *area, float *volume) {
    float pi = 3.14159;
    (*area) = 4*pi*R*R;
    (*volume) = (4/3)*pi*R*R*R;
}

int main() {
    float raio;
    printf("Digite o raio: ");
    scanf("%f",&raio);
    float area,volume;
    calc_esfera(raio,&area,&volume);
    printf("%f\n",area);
    printf("%f\n",volume);
    return 0;
}