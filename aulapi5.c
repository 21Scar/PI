//ficha 5 structs e indices
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
int numero;
char nome[100];
int miniT [6];
float teste;
} Aluno;

int nota (Aluno a){
    float soma = 0;
    for(int i = 0; i<6; i++){
        soma += a.miniT[i];
    }
    float media = soma/6;
    if(media>=8 && a.teste>=8){
        return 1;
    }else{
        return 0;
    }
}

int procuraNum (int num, Aluno t[], int N){
    for(int i = 0; i<N; i++){
        if(t[i].numero == num){
            return i;
        }
    }
    return -1;
}
