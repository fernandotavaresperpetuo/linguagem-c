#include<stdio.h>
/*
4- Exerc�cios sobre fun��o e procedimento com e sem passagem de par�metros:
A partir do seguinte problema: Escreva um programa em Linguagem C que receba
dois n�meros inteiros e retorne o menor n�mero.
a) Desenvolva procedimento sem passagem de par�metro para o problema proposto:
b) Desenvolva procedimento com passagem de par�metro para o problema proposto:
*/

int A, B;
int sem_param();

int main(){
	int menor;
	printf("c) Desenvolva fun��o sem passagem de par�metro para o problema proposto:\n\n");
	printf("digite o primeiro numero inteiro: ");
	scanf("%d", &A);
	printf("digite o segundo numero inteiro: ");
	scanf("%d", &B);
	printf("\nNumeros digitados primeiro: %d, segundo: %d", A, B);
	menor= sem_param();
	printf("\nresultado menor numero: %d", menor);
}
int sem_param(){
	if (A>B) return B;
	else return A;	
}
/*
d) Desenvolva fun��o com passagem de par�metro para o problema proposto:*/
