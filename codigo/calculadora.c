#include <stdio.h>
#include <math.h>

int fatorial(int n) {

    int produto = 1;
    int i;
    for (i=1;i<=n;i++) {
        produto = produto * i;
    }
    return (produto);

}

float calculadora(char operacao, float a, float b) {

    if (operacao=='+') {
        return (a+b);
    }
    else if (operacao=='-') {
        return (a-b);
    }
    else if (operacao=='*') {
        return (a*b);
    }
    else if (operacao=='/') {
        return (a/b);
    }
    else if (operacao=='p') {
        return (pow(a,b));
    }
    else if (operacao=='r') {
        return (sqrt(a));
    }
    else if (operacao=='f') {
        return(fatorial((int)a));
    }
    else {
        return (0);
    }


}


int main() {
    //DECLARAÇÃO DE VARIÁVEIS
    char operacao;
    float a;
    float b;
    float resultado;

    //ENTRADA
    printf("Digite n1: ");
    scanf("%f",&a);
    printf("Digite a operacao:");
    scanf("%s",&operacao);
    printf("Digite n2: ");
    scanf("%f",&b);

    //PROCESSAMENTO CHAMANDO A FUNÇÃO
    resultado = calculadora(operacao,a,b);

    //SAIDA
    printf("%.5f\n",resultado);

    return 0;
}
