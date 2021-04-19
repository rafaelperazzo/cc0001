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

void inserir_inicio(int valor, celula *p) {
    celula *nova = nova_celula(valor);
    nova->prox = p->prox;
    p->prox=nova;
}

void imprima(celula *p) {
    p = p->prox;
    if (p==NULL) {
        printf("Lista vazia!");
    }
    while (p!=NULL) {
        printf("%d\n",p->conteudo);
        p = p->prox;
    }
}

void remover(int posicao, celula *p) {
    int i=0;
    celula *lixo;
    while(p->prox!=NULL) {
        if (i==posicao) { //Encontrei a célula a ser removida
            lixo = p->prox;
            p->prox = lixo->prox;
            free(lixo);
        }
        else {
            p = p->prox;
        }
        i++;
    }
}

void concatenar(celula *lista1, celula *lista2) {
    while (lista1->prox!=NULL) {
        lista1 = lista1->prox;
    }
    lista1->prox = lista2->prox;
}

int main() {

    celula *cabeca;
    cabeca = inicializar();
    inserir(20,cabeca);
    inserir(30,cabeca);
    inserir(40,cabeca);
    inserir_inicio(50,cabeca);
    remover(1,cabeca);
    //imprima(cabeca);
    celula *cabeca2;
    cabeca2 = inicializar();
    inserir(100,cabeca2);
    inserir(200,cabeca2);
    concatenar(cabeca,cabeca2);
    imprima(cabeca);
    return 0;
}
