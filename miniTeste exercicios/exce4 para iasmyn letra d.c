#include<stdio.h>
/*
4- Exercícios sobre função e procedimento com e sem passagem de parâmetros:
A partir do seguinte problema: Escreva um programa em Linguagem C que receba
dois números inteiros e retorne o menor número.
a) Desenvolva procedimento sem passagem de parâmetro para o problema proposto:
b) Desenvolva procedimento com passagem de parâmetro para o problema proposto:
c) Desenvolva função sem passagem de parâmetro para o problema proposto:
*/
int com_param();

int main(){
	int A, B, menor;
	printf("d) Desenvolva função com passagem de parâmetro para o problema proposto:\n\n");
	printf("digite o primeiro numero inteiro: ");
	scanf("%d", &A);
	printf("digite o segundo numero inteiro: ");
	scanf("%d", &B);
	printf("\nNumeros digitados primeiro: %d, segundo: %d", A, B);
	menor= com_param( A, B);
	printf("\nresultado menor numero: %d", menor);
}
int com_param(int x, int y){
	if (x>y) return y;
	else return x;
}
