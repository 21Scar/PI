#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Defina um programa que le (usando a funcao scanf uma sequencia de numeros inteiros ter-
minada com o numero 0 e imprime no ecran o maior elemento da sequencia.*/

int maxsequence(int[], int){
  int n, max;
  scanf("%d", &n);
  max = n;
  while (n!=0){
    scanf("%d", &n);
    if (n>max){
      max = n;
      scanf("%d", &n);
    }
  }
  printf("O maior é %d", max);

}

/*Defina um programa que lˆe (usando a fun¸c˜ao scanf uma sequˆencia de n´umeros inteiros ter-
minada com o n´umero 0 e imprime no ecran a m´edia da sequˆencia.*/

void media(int[], int){
  int n, x = 0;
  scanf("%d", &n);
  int soma = n;
  while (n!=0){
    scanf("%d", &n);
    soma += n;
    x++;
  }
  float media = soma/x;
  printf("A media é %f", media);
}

/*Defina um programa que lˆe (usando a fun¸c˜ao scanf uma sequˆencia de n´umeros inteiros ter-
minada com o n´umero 0 e imprime no ecran o segundo maior elemento.*/
 void segundomaior(){
  int n, maior1=0, maior2=0;
  scanf("%d", &n);
  while(n!=0){
    if(n>maior1 && n>maior2){
      maior2 =maior1;
      maior1 = n;    
      }else if(n>maior2 && n<maior1){
        maior2 = n;
      }
      scanf("%d", &n);
  }
  printf("O segundo maior é %d", maior2);
 }
/*Defina uma fun¸c˜ao int bitsUm (unsigned int n) que calcula o n´umero de bits iguais a 1
usados na representa¸c˜ao bin´aria de um dado n´umero n. (https://codeboard.io/projects/
13548)*/

int bitsUm(unsigned int n){
  int contador = 0;
  while(n!=0){
    if(n%2==1){
      contador++;
    }
    n = n/2;
  }
  return contador;
}
/*Defina uma fun¸c˜ao int trailingZ (unsigned int n) que calcula o n´umero de bits a 0 no
final da representa¸c˜ao bin´aria de um n´umero (i.e., o expoente da maior potˆencia de 2 que ´e
divisor desse n´umero).*/

int trailingZ(unsigned int n){
  int contador = 0;
  while(n%2==0){
    contador++;
    n = n/2;
  }
  return contador;
}


/*
int main(){
    //exe 1
    int n;
    printf("Insira uma sequencia de numeros inteiros terminada com o numero 0: ");
    scanf("%d", &n);

    printf("O maior elemento da sequencia e: %d\n", maxsequence(n));
return 0;
}

*/
/*Defina uma fun¸c˜ao int qDig (unsigned int n) que calcula o n´umero de d´ıgitos necess´arios
para escrever o inteiro n em base decimal. Por exemplo, qDig (440) deve retornar 3.*/

int qDig(unsigned int n){
  int contador = 0;
  while(n!=0){
    contador++;
    n = n/10; // ao dividir por dez remove o último dígito e como está definido como int entao ficaria do género n =123 -> 12,3 = 12 e contamos um digito
  } // n é dividido por 10 ate ser 0
  return contador;
}

/*Apresente uma defini¸c˜ao da fun¸c˜ao pr´e-definida em C char *strcat (char s1[], char
s2[]) que concatena a string s2 a s1 (retornando o endere¸co da primeira). */

char *mystrcat (char s1[], char s2[]){
  int i, j;
  for(i=0; s1[i]!='\0'; i++);
  for(j=0; s2[j]!='\0'; j++){
    s1[i] = s2[j];
    i++;
  }
  s1[i] = '\0';
  return s1;
}

//alternativa
char *mystract2 (char s1[], char s2[]){
  int i = strlen(s1),j;
  for (j=0; s2[j]!='\0';j++){
    s1[i+j] = '\0';
    return s1;
  }
}

/*Apresente uma defini¸c˜ao da fun¸c˜ao pr´e-definida em C char *strcpy (char *dest, char
source[]) que copia a string source para dest retornando o valor desta ´ultima.*/

char *mystrcpy(char *dest, char source[]){
  int i;
  for (i=0; source[i]!=0; i++){
    dest[i] = source[i];
  }
return dest;}

/*Apresente uma defini¸c˜ao da fun¸c˜ao pr´e-definida em C int strcmp (char s1[], char s2[])
que compara (lexicograficamente) duas strings. O resultado dever´a ser
• 0 se as strings forem iguais
• <0 se s1 < s2
• >0 se s1 > s2*/

int max (int n, int m){
    return(n>m ? n : m); // funciona com um if else, neste caso seria se n>m entao n senao m
}

int mystrcmp (char s1[], char s2[]){
	int  l1 = strlen(s1), l2 = strlen(s2), i; // strlen tanho da string

	for(i = 0; i < max(l1,l2); i++){
		if(s1[i] == s2[i]);
		else{
			if(s1[i]<s2[i])
				return (-1);
			else
				return 1;
		}
	}
	return 0;
}