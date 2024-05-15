#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct celula {
char *palavra;
int ocorr;
struct celula * prox;
} * Palavras;

//1.
void libertaLista (Palavras l){
    Palavras temp = l;
    while(l != NULL){
        l = l->prox;
        free(temp);
    }
}

//2.
int quantasP (Palavras l){
    int i; Palavras temp = l;
    for(i=0; temp != NULL; temp = temp->prox){
        i++;
    }
    return i;
}

//3.
void listaPal (Palavras l){
  Palavras temp = l;
    while(temp != NULL){
        printf("Palavra :%s, Ocorre: %d\n", temp->palavra, temp->ocorr);
        temp = temp->prox;
    }
}

//4.
char * ultima (Palavras l){
    Palavras temp = l;
    while(temp->prox != NULL){
        temp = temp->prox;
    }
   return temp->palavra;
}
/*
alternativa 
char * ultima (Palavras l){
    Palavras temp = l;
    char *aux = NULL;
    while(temp != NULL){
        aux =  temp *palavra;
    }
   return aux;
*/

//5.
Palavras acrescentaInicio (Palavras l, char *p){
    Palavras nova = malloc(sizeof(struct celula));
    nova->palavra = p;
    nova->ocorr = 1;
    nova->prox = l;
    return nova;
}