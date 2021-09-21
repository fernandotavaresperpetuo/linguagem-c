#include<stdio.h>
/*
4- Exercícios sobre função e procedimento com e sem passagem de parâmetros:
A partir do seguinte problema: Escreva um programa em Linguagem C que receba
dois números inteiros e retorne o menor número.
a) Desenvolva procedimento sem passagem de parâmetro para o problema proposto:
b) Desenvolva procedimento com passagem de parâmetro para o problema proposto:
*/

int A, B;
int sem_param();

int main(){
	int menor;
	printf("c) Desenvolva função sem passagem de parâmetro para o problema proposto:\n\n");
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
d) Desenvolva função com passagem de parâmetro para o problema proposto:*/
