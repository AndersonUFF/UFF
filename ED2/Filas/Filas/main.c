#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define MAX 5;

int main(void){

	Fila *f;
	
	f = criaFilaVazia(); // CRIA UMA FILA VAZIA

	for (int i = 0; i < 5; i++)
		insereFila(f, i); // INSERE VALORES NA FILA
	
	printf("Fila antes da remocao\n");
	imprimeFila(f); //IMPRIME A FILA
	printf("\n\n");

	filaRemove(f);
	printf("Fila depois da remocao\n");
	imprimeFila(f); //IMPRIME A FILA
	printf("\n\n");

	system("pause");
	return 0;
}