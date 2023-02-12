/*
 * lista.c
 * Classe de implemantação da ED Lista Simples.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* iniciar() {

	Lista *l = malloc(sizeof(Lista));
	l->inicio = NULL;
	l->tamanho = 0;

	return l;
}

void add(Lista *l, int numero) {

	if (empty(l)) {

		Elemento *e = malloc(sizeof(Elemento));
		e->valor = numero;
		e->proximo = NULL;

		l->inicio = e;
	} else {

		Elemento *e = malloc(sizeof(Elemento));
		Elemento *antigo_inicio = l->inicio;

		e->valor = numero;
		l->inicio = e;
		e->proximo = antigo_inicio;
	}

	l->tamanho = l->tamanho + 1;
}

int empty(Lista *l) {
	return l->tamanho == 0;
}

int get(Lista *l, int posicao) {

	if (empty(l)) {
		printf("Lista vazia.\n");
		return '\0';
	}

	if (posicao > l->tamanho || posicao <= 0) {
		printf("Posição inválida!\n");
		return '\0';
	}

	int i = 1;
	Elemento *e = l->inicio;
	while (e != NULL) {

		if (i == posicao) {
			return e->valor;
		} else {

			e = e->proximo;
			i++;
		}
	}

	return -1;
}

int size(Lista *l) {
	return l->tamanho;
}

void exibir(Lista *l) {

	if (empty(l)) {

		printf("Lista vazia!\n");
		return;
	}

	Elemento *e = l->inicio;
	printf("Lista:\n");

	while (e != NULL) {

		printf(" %d ", e->valor);
		e = e->proximo;
	}

	printf("\n");
}
