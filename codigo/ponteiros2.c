#include <stdio.h>
#include <stdlib.h>

struct celula {
    int valor;
    struct celula *proximo;
};

typedef struct celula Celula;


Celula *cria_celula(int valor) {

    Celula *no;
    no = (Celula*) malloc(sizeof(Celula));
    if (no!=NULL) {
        no->valor = valor;
        no->proximo = NULL;
    }
    return (no);
}

void inserir(Celula *inicio, Celula *novo) {

    while (inicio->proximo!=NULL) {
        inicio = inicio->proximo;
    }
    inicio->proximo = novo;
}

void imprimir(Celula *inicio) {

    do {
        printf("%d\n",inicio->valor);
        inicio = inicio->proximo;

    }while (inicio!=NULL);
}

int main() {


    Celula *inicio;
    inicio = cria_celula(0);

    Celula *novo;
    novo = cria_celula(10);

    inserir(inicio,novo);

    imprimir(inicio);

    return 0;
}
