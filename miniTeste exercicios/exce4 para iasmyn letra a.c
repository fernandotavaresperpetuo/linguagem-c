#include<stdio.h>
/*
4- Exercícios sobre função e procedimento com e sem passagem de parâmetros:
A partir do seguinte problema: Escreva um programa em Linguagem C que receba
dois números inteiros e retorne o menor número.
*/

int A, B;
void sem_param();

int main(){
	printf("a) Desenvolva procedimento sem passagem de parâmetro para o problema proposto:\n\n");
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
b) Desenvolva procedimento com passagem de parâmetro para o problema proposto:
c) Desenvolva função sem passagem de parâmetro para o problema proposto:
d) Desenvolva função com passagem de parâmetro para o problema proposto:*/
