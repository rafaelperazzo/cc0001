#include <stdio.h>
#include <stdlib.h>

typedef struct no celula;
struct no {
    int conteudo;
    celula *prox;
};

celula *inicializar() {
    celula *cabeca;
    cabeca = malloc(sizeof(celula));
    cabeca->prox = NULL;
    return(cabeca);
}

celula *nova_celula(int valor) {
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = valor;
    nova->prox = NULL;
    return (nova);
}

void inserir_final(int valor, celula *p) {
    //1) Criar uma nova celula com o valor
    celula *nova;
    nova = nova_celula(valor);
    //2) Chegar ao final da lista, a partir da cabeca
    while (p->prox!=NULL) {
        p = p->prox;
    }
    //3) Faz o prox da última celula apontar para a nova celula do passo 1
    p->prox = nova;
}

void imprimir(celula *p) {
    while(p->prox!=NULL) {
        p = p->prox;
        printf("%d\n",p->conteudo);
    }
}

void inserir_inicio(int valor, celula *p) {
    //PASSO 1: CRIAR UMA NOVA CELULA
    celula *nova;
    nova = nova_celula(valor);
    //PASSO 2: Prox do novo é o prox do cabeça, e o proximo do cabeça é o novo
    nova->prox = p->prox;
    p->prox = nova;
}

int main() {
    celula *cabeca;
    cabeca = inicializar();
    inserir_final(10,cabeca);
    inserir_final(20,cabeca);
    inserir_inicio(100,cabeca);
    imprimir(cabeca);
}
