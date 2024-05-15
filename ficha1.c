/*Escreva um programa que desenhe no ecran (usando o caracter #) um quadrado de
dimens˜ao 5. O resultado da invoca¸c˜ao da fun¸c˜ao com um argumento 5 dever´a ser
#####
#####
#####
#####
#####*/

#include <stdio.h>
#include <stdlib.h>

void replicate(int n, char c){
    for(int i= 0 ; i<n; i++){
        putchar(c);
    }
}
void desenharquadrado(int n){
    for(int i = 0; i<n; i++){
        replicate(n,'#');
        putchar('\n');
    }
}

/*Escreva um programa que desenhe no ecran (usando os caracteres # e _) um tabuleiro
de xadrez. O resultado da invoca¸c˜ao dessa fun¸c˜ao com um argumento 5 dever´a ser
#_#_#
_#_#_
#_#_#
_#_#_
#_#_#*/