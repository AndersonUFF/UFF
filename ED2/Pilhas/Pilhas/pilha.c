#include <stdio.h>
#include <stdlib.h>

struct no {
	int info;
	struct no *prox;
};

typedef struct no No;

struct pilha {
	No *topo;
};

typedef struct pilha Pilha;

Pilha *criaPilha(void){
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p->topo = NULL;
	return p;
}

Pilha *pilha_push(Pilha *p, int info){
	No *novo = (No*)malloc(sizeof(No));
	novo->info = info;
	novo->prox = p->topo;
	p->topo = novo;
	return p;
}

Pilha *pilha_pop(Pilha*p){
	No *pont = p->topo;
	p->topo = pont->prox;
	free(pont);
	return p;
}

void imprimePilha(Pilha *p){
	No *pont;
	for (pont = p->topo; pont->prox != NULL; pont = pont->prox) {
		printf("%i\n", pont->info);
	}
}

