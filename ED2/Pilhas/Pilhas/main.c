#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main (void) {
	Pilha *p;

	p = criaPilha();
	for (int i = 0; i < 6; i++) {
		p = pilha_push(p, i);
	}
	imprimePilha(p);
	printf("\n");
	printf("\n");
	printf("Pilha depois do pilha_pop\n");
	p = pilha_pop(p);
	imprimePilha(p);
	system("pause");
	return 0;
}