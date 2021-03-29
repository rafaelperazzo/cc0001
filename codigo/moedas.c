#include <stdio.h>

int main() {

    //VARIÁVEIS
    int centavos,inteira,fracionaria;
    float valor;
    int cem,cinquenta,vinte,dez,cinco,dois;
    int mum,mcinquenta,mvinte,mdez,mcinco,mumc;
    //ENTRADA
    printf("Digite o valor: ");
    scanf("%f",&valor);

    //CEDULAS
    inteira = (int)valor;
    fracionaria = ((int)(valor*100+0.5))%100;

    cem = (int)(inteira/100);
    inteira = inteira%100;

    cinquenta = (int)(inteira/50);
    inteira = inteira%50;

    vinte = (int)(inteira/20);
    inteira = inteira%20;

    dez = (int)(inteira/10);
    inteira = inteira%10;

    cinco = (int)(inteira/5);
    inteira = inteira%5;

    dois = (int)(inteira/2);
    inteira = inteira%2;

    //MOEADAS
    mum = inteira;
    mcinquenta = (int)(fracionaria/50);
    fracionaria = fracionaria%50;

    mvinte = (int)(fracionaria/25);
    fracionaria = fracionaria%25;

    mdez = (int)(fracionaria/10);
    fracionaria = fracionaria%10;

    mcinco = (int)(fracionaria/5);
    fracionaria = fracionaria%5;

    mumc = (int)(fracionaria/1);
    fracionaria = fracionaria%1;

    printf("NOTAS: \n");
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinquenta);
    printf("%d nota(s) de R$ 20.00\n",vinte);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cinco);
    printf("%d nota(s) de R$ 2.00\n",dois);

    printf("MOEDAS: \n");
    printf("%d moeda(s) de R$ 1.00\n",mum);
    printf("%d moeda(s) de R$ 0.50\n",mcinquenta);
    printf("%d moeda(s) de R$ 0.25\n",mvinte);
    printf("%d moeda(s) de R$ 0.10\n",mdez);
    printf("%d moeda(s) de R$ 0.05\n",mcinco);
    printf("%d moeda(s) de R$ 0.01\n",mumc);


}
