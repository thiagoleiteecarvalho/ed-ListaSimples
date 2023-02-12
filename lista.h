/*
 * lista.h
 * Header de definição da ED Lista Simples.
 * Author: Thiago Leite
 */

#pragma once

typedef struct elemento {
 char valor;
 struct elemento *proximo;
} Elemento;

typedef struct lista {
 Elemento *inicio;
 int tamanho;
} Lista;

Lista* iniciar();
void add(Lista *l, char caractere);
int empty(Lista *l);
void add_pos(Lista *l, char caractere, int posicao);
char get(Lista *l, int posicao);
void set(Lista *l, char caractere, int posicao);
char delete(Lista *l, int posicao);
int size(Lista *l);
void exibir(Lista *l);
