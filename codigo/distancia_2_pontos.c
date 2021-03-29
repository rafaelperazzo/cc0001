#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2) {

    float resultado;
    resultado = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return (resultado);

}

int main() {

    //DECLARAÇÃO DE VARIÁVEIS
    float x1,x2,y1,y2;

    //ENTRADA
    printf("Digite x1: ");
    scanf("%f",&x1);
    printf("Digite y1: ");
    scanf("%f",&y1);
    printf("Digite x2: ");
    scanf("%f",&x2);
    printf("Digite y2: ");
    scanf("%f",&y2);

    //PROCESSAMENTO, CHAMANDO A FUNÇÃO
    float resultado = distancia(x1,y1,x2,y2);
    
    //SAÍDA
    printf("%.5f\n",resultado);
    
    return 0;
}