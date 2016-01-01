#ifndef FILA_H
#define FILA_H

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

Fila *criaFilaVazia();

filaVazia(Fila *f);

/* COMO ESTOU RECEBENDO O PONTEIRO DA FILA, OU SEJA, ESTOU RECEBENDO O PARAMETRO POR
* REFERENCIA, A FUN��O N�O PRECISA DE RETORNO, POIS EST� ALTERANDO A FILA DIRETAMENTE
* NO PROGRAMA PRINCIPAL ("main") */
void insereFila(Fila *f, int info);

void filaRemove(Fila *f);

/* COMO ESTOU RECEBENDO O PONTEIRO DA FILA, OU SEJA, ESTOU RECEBENDO O PARAMETRO POR
* REFERENCIA, A FUN��O N�O PRECISA DE RETORNO, POIS EST� ALTERANDO A FILA DIRETAMENTE
* NO PROGRAMA PRINCIPAL ("main") */
void imprimeFila(Fila *f);

#endif