#include<stdio.h>
/*
4- Exercícios sobre função e procedimento com e sem passagem de parâmetros:
A partir do seguinte problema: Escreva um programa em Linguagem C que receba
dois números inteiros e retorne o menor número.
a) Desenvolva procedimento sem passagem de parâmetro para o problema proposto:
*/


void com_param();

int main(){
	int A, B;
	printf("b) Desenvolva procedimento com passagem de parâmetro para o problema proposto:\n\n");
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

c) Desenvolva função sem passagem de parâmetro para o problema proposto:
d) Desenvolva função com passagem de parâmetro para o problema proposto:*/
