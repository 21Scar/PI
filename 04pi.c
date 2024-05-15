#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct slist {
int valor;
struct slist * prox;
} * LInt;
LInt newLInt (int x, LInt xs) {
LInt r = malloc (sizeof(struct slist));
if (r!=NULL) {
r->valor = x; r->prox = xs;
}
return r;
}

typedef LInt Stack;

typedef struct {
LInt inicio,fim;
} Queue;

//1.1 - Inicializar a stack (utiliza um apontador como argumento)
void initStack (Stack *s){
    *s = NULL;//esta a ser incializada a stack com NULL, está vazia (nao contem elementos)
}

//1.2 - Verificar se a stack está vazia
int SisEmpty (Stack s){
    return s==NULL; //se a stack for NULL, está vazia
}

/*
nota: dois asteriscos porque é um apontador para um apontador, ou seja, ha uma variavel que 
guarda um apontador que aponta para outro apontador (uma variavek que aponta 
para uma caixa que dentro dela tem um apontador/endereço para outra caixa)
ex:
*(*s) -> apontador para o inicio da stack == (*s) ->valor
(*s)->prox -> apontador para o proximo elemento da stack == s -> valor
*/

//1.3 - Colocar um elemento no topo da stack
int push (Stack *s, int x){
    *s = newLInt(x, *s); //a stack passa a ter um novo elemento no topo, que é o x
    return (*s) != NULL ; //retorna 0 se a operação for bem sucedida

    /*
    alternativa1:
    Stack aux = *s; //cria-se uma stack auxiliar que é igual à stack original
    *s = newLInt(x, aux); //a stack original passa a ter um novo elemento no topo, que é o x
    return 0; //retorna 0 se a operação for bem sucedida

    alternativa2:
    if((*s) == NULL) 
    return 1;
    else
    return 0;
*/
}

//1.4 - Retirar o elemento do topo da stack
int pop (Stack *s, int *x){ 
    if(SisEmpty(*s)){ //se a stack estiver vazia
        return 1; //retorna 1
    }
    *x = (*s)->valor; //o valor do topo da stack é guardado na variável x
    Stack aux = *s; //cria-se uma stack auxiliar que é igual à stack original
    *s = (*s)->prox; //a stack original passa a ser a stack sem o elemento do topo
    free(aux); //liberta-se a stack auxiliar
    return 0; //retorna 0 se a operação for bem sucedida
}

//1.5 - Consultar o elemento do topo da stack
int top (Stack s, int *x){ 
    if(SisEmpty(s)){ //se a stack estiver vazia
        return 1;
    }
    *x = s->valor; //o valor do topo da stack é guardado na variável x
    return 0; //retorna 0 se a operação for bem sucedida
}

/*q-> estrutura mae que tem dois apontadores, inicio (q.inicio) e fim (q.fim);
se tiver o asterisco atras quer dizer que estamos a falar dos dois (inicio e fim); */

//2.1 - Inicializar a queue
void initQueue (Queue *q){
    q->inicio = NULL; //a queue é inicializada com NULL, está vazia
    q->fim = NULL; //a queue é inicializada com NULL, está vazia
}

//2.2 - Verificar se a queue está vazia
int QisEmpty (Queue q){
    if (q.inicio == NULL){
        return -1; //retorna -1 se a queue estiver vazia
    }else{
        return 0; //retorna 0 se a queue não estiver vazia
    }
/* alternativa:
return q.inicio == NULL; //se a queue estiver vazia, o inicio é NULL

nota: NULL == NULL true (0); 0x100 == NULL false (1)
*/
} 

//2.3 - Colocar um elemento no fim da queue
int enqueue (Queue *q, int x){
    LInt new = newLInt(x, NULL); //cria-se um novo elemento da queue
    if(q->inicio == NULL){ //se a queue estiver vazia
        q->inicio = new; //o inicio da queue passa a ser o novo elemento
        q->fim = new; //o fim da queue passa a ser o novo elemento
    }else{
        q->fim->prox = new; //o fim da queue passa a apontar para o novo elemento
        q->fim = new; //o fim da queue passa a ser o novo elemento
    }
    return 0; //retorna 0 se a operação for bem sucedida

    /*resolução Catarina:
    {
    Queue nova= newLInt(x, NULL);
    if(nova == NULL) return -1;

    if(q->inicio !=NULL){
    q-> fim ->prox =nova;
    q->fim = nova;}
    else{
    q->inicio = nova;
    q->fim = nova;
    }

    return 0;
    }
     */
}

//2.4 - Retirar o elemento do inicio da queue
int dequeue (Queue *q, int *x){
    if(QisEmpty(*q)){ //se a queue estiver vazia
        return 1; //retorna 1
    }
    *x = q->inicio->valor; //o valor do inicio da queue é guardado na variável x
    LInt aux = q->inicio; //cria-se uma queue auxiliar que é igual à queue original
    q->inicio = q->inicio->prox; //o inicio da queue passa a ser o elemento seguinte
    free(aux); //liberta-se a queue auxiliar
    return 0; //retorna 0 se a operação for bem sucedida

/*resoluçao Catarina:
if(q->inicio == NULL) return -1;
    *x = q->inicio->valor;
    Queue temp = q->inicio;
    q->inicio = q->inicio->prox;
    free(temp);
    return 0;
*/

}

//2.5 - Consultar o elemento do inicio da queue
int front (Queue q, int *x){
    if(QisEmpty(q)){ //se a queue estiver vazia
        return 1; //retorna 1
    }
    *x = q.inicio->valor; //o valor do inicio da queue é guardado na variável x
    return 0; //retorna 0 se a operação for bem sucedida
}