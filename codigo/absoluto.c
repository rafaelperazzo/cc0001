/*
Escreva	 um	 programa	 em	 C	 que	 leia	 5	 valores	 
inteiros	 e	 imprima	 para	 cada	um	o	seu	correspondente	
valor	absoluto.	
Para	obter	o	valor	absoluto	 do	número	utilize	a	
função	Absoluto especificada abaixo:		 
Nome:	Absoluto 
Descrição:	Retorna	o	valor	absoluto	do	número	fornecido.	 
Entrada:	 n	 
Saída:	(int)	O	respectivo	valor	absoluto	de	n. 
*/


#include <stdio.h>

int absoluto(int n) {

    if (n>=0) {
        return (n);
    }
    else {
        return (n*(-1));
    }

}


int main() {

    //DECLARAÇÃO DE VARIÁVEIS
    int numero;
    int valor_absoluto;
    //ENTRADA
    int i;
    for (i=1;i<=5;i++) {
        printf("Digite o numero: ");
        scanf("%d",&numero);
        valor_absoluto = absoluto(numero);
        printf("%d\n",valor_absoluto);
    }

    return 0;
}