#include <stdio.h>
#include <stdlib.h>

typedef struct reg celula;
struct reg {
    int        conteudo;
    celula *prox;
};

celula *inicializar() {

    celula *primeiro;
    primeiro = malloc (sizeof (celula));
    primeiro->prox = NULL;
    return(primeiro);

}

celula *nova_celula(int valor) {

    celula *nova;
    nova = malloc (sizeof (celula));
    nova->conteudo = valor;
    nova->prox = NULL;
    return (nova);

}

void inserir(int valor, celula *p) {

    while (p->prox!=NULL) {
        p = p->prox;
    }
    p->prox = nova_celula(valor);
}

void imprima(celula *primeira) {
    celula *p;
    p = primeira->prox;
    if (p==NULL) {
        printf("Lista vazia!");
    }
    while (p!=NULL) {
        printf("%d\n",p->conteudo);
        p = p->prox;
    }
}

int main() {

    celula *cabeca;
    cabeca = inicializar();
    inserir(20,cabeca);
    inserir(30,cabeca);
    imprima(cabeca);
    return 0;
}
