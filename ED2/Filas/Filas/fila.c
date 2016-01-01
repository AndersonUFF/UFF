#include <stdio.h>
#include <stdlib.h>

struct no {
	int info;
	struct no *prox;
};

typedef struct no No;

struct fila {
	No *prim;
	No *ultimo;
};

typedef struct fila Fila;

Fila *criaFilaVazia(){
	Fila *f = (Fila*)malloc(sizeof(Fila));
	f->prim = NULL;
	f->ultimo = NULL;
	return f;
}

int filaVazia(Fila *f){
	return (f->prim == NULL);
}

/* COMO ESTOU RECEBENDO O PONTEIRO DA FILA, OU SEJA, ESTOU RECEBENDO O PARAMETRO POR 
 * REFERENCIA, A FUNÇÃO NÃO PRECISA DE RETORNO, POIS ESTÁ ALTERANDO A FILA DIRETAMENTE
 * NO PROGRAMA PRINCIPAL ("main") */ 
void insereFila(Fila *f, int info){
	
	No *novo = (No*)malloc(sizeof(No));
	novo->info = info;
	if (filaVazia(f)){
		novo->prox = f->prim;
		f->prim = f->ultimo = novo;
		novo = novo->prox;
		free(novo);
		return f;
	} else {
		novo->prox = f->ultimo->prox;
		f->ultimo->prox= novo;
		f->ultimo = f->ultimo->prox;
		novo = novo->prox;
		free(novo);
	}
	return f;
}

void filaRemove(Fila *f){
	if (filaVazia(f)){
		printf("Fila Vazia");
	} else {
		No *pont;
		for (pont = f->prim; pont->prox != f->ultimo; pont = pont->prox);
		f->ultimo = pont;
		pont = pont->prox;
		f->ultimo->prox = pont->prox;
		free(pont);
	}
}


/* COMO ESTOU RECEBENDO O PONTEIRO DA FILA, OU SEJA, ESTOU RECEBENDO O PARAMETRO POR
 * REFERENCIA, A FUNÇÃO NÃO PRECISA DE RETORNO, POIS ESTÁ ALTERANDO A FILA DIRETAMENTE
 * NO PROGRAMA PRINCIPAL ("main") */
void imprimeFila(Fila *f){
	No *pont;
	for (pont = f->prim; pont != NULL; pont = pont->prox){
		printf("%i ", pont->info);
	}
}
