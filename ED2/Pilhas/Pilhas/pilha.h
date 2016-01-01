#ifndef PILHA_H
#define PILHA_H

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

Pilha *criaPilha(void);
Pilha *pilha_push(Pilha *p, int info);
Pilha *pilha_pop(Pilha*p);
void imprimePilha(Pilha *p);

#endif