#include<stdio.h>
/*
4- Exerc�cios sobre fun��o e procedimento com e sem passagem de par�metros:
A partir do seguinte problema: Escreva um programa em Linguagem C que receba
dois n�meros inteiros e retorne o menor n�mero.
*/

int A, B;
void sem_param();

int main(){
	printf("a) Desenvolva procedimento sem passagem de par�metro para o problema proposto:\n\n");
	printf("digite o primeiro numero inteiro: ");
	scanf("%d", &A);
	printf("digite o segundo numero inteiro: ");
	scanf("%d", &B);
	printf("\nNumeros digitados primeiro: %d, segundo: %d", A, B);
	sem_param();
}
void sem_param(){
	int menor;
	if (A>B) menor=B;
	else menor=A;
	
	printf("\nresultado menor numero: %d", menor);
}
/*
b) Desenvolva procedimento com passagem de par�metro para o problema proposto:
c) Desenvolva fun��o sem passagem de par�metro para o problema proposto:
d) Desenvolva fun��o com passagem de par�metro para o problema proposto:*/
