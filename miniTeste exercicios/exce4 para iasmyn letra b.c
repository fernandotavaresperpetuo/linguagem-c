#include<stdio.h>
/*
4- Exerc�cios sobre fun��o e procedimento com e sem passagem de par�metros:
A partir do seguinte problema: Escreva um programa em Linguagem C que receba
dois n�meros inteiros e retorne o menor n�mero.
a) Desenvolva procedimento sem passagem de par�metro para o problema proposto:
*/


void com_param();

int main(){
	int A, B;
	printf("b) Desenvolva procedimento com passagem de par�metro para o problema proposto:\n\n");
	printf("digite o primeiro numero inteiro: ");
	scanf("%d", &A);
	printf("digite o segundo numero inteiro: ");
	scanf("%d", &B);
	printf("\nNumeros digitados primeiro: %d, segundo: %d", A, B);
	com_param( A, B);
}
void com_param(int x, int y){
	int menor;
	if (x>y) menor=y;
	else menor=x;
	
	printf("\nresultado menor numero: %d", menor);
}
/*

c) Desenvolva fun��o sem passagem de par�metro para o problema proposto:
d) Desenvolva fun��o com passagem de par�metro para o problema proposto:*/
