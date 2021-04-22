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

int tamanho(celula *p) {
    int i=0;
    while (p->prox!=NULL) {
        i++;
        p=p->prox;
    }
    return(i);
}

int vazia(celula *p) {
    if (p->prox==NULL) {
        return (1);
    }
    else {
        return (0);
    }
}

void inserir_n(int valor, celula *p, int posicao) {
    int i=0;
    if (posicao>=tamanho(p)) {
        printf("Posição inválida!\n");
        return;
    }
    //Chegar na celula anterior
    for (i=0;i<posicao;i++) {
        p=p->prox;
    }
    //Criar nova celula e ajustar ponteiros
    celula *nova;
    nova = nova_celula(valor);
    nova->prox=p->prox;
    p->prox = nova;
}

void remover_inicio(celula *p) {

    if (p->prox!=NULL) {
        celula *lixo;
        //O lixo fica sendo o primeiro elemento
        lixo = p->prox;
        //O próximo do cabeça fica sendo o próximo do elemento que será removido
        p->prox = lixo->prox;
        //Remover a primeira célula
        free(lixo);
    }
}

void remover_final(celula *p) {
    if (p->prox==NULL) return;
    //1 - Chegar ao penultimo elemento
    int i,ultimo;
    ultimo = tamanho(p)-1;
    for (i=0;i<ultimo;i++) {
        p=p->prox;
    }
    free(p->prox);
    p->prox=NULL;
}

void remover_n(celula *p, int posicao) {

    if (posicao>=tamanho(p)) {
        printf("Posição inválida!\n");
        return;
    }
    //Chegar a celula anterior a ser removida
    int i=0;
    for (i=0;i<posicao;i++) {
        p=p->prox;
    }
    //Ajustar os ponteiros
    celula *lixo;
    lixo = p->prox;
    p->prox=lixo->prox;
    free(lixo);
}

void imprimir_como_lista(celula *p) {
    if (p->prox==NULL) {
        printf("[INICIO]==>NULL");
    }
    else {
        printf("[INICIO]==>");
    }
    while (p->prox!=NULL) {
        p=p->prox;
        if (p->prox==NULL) {
            printf("[%d]==>NULL\n",p->conteudo);
        }
        else {
            printf("[%d]==>",p->conteudo);
        }
    }
}

int main() {
    celula *cabeca;
    cabeca = inicializar();
    inserir_final(10,cabeca);
    inserir_final(20,cabeca);
    inserir_final(30,cabeca);
    inserir_final(40,cabeca);
    inserir_n(222,cabeca,0);
    imprimir_como_lista(cabeca);
    //remover_n(cabeca,2);
    //imprimir_como_lista(cabeca);
    remover_final(cabeca);
    imprimir_como_lista(cabeca);
    remover_final(cabeca);
    imprimir_como_lista(cabeca);
}
