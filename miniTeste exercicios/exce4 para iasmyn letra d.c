#include<stdio.h>
/*
4- Exerc�cios sobre fun��o e procedimento com e sem passagem de par�metros:
A partir do seguinte problema: Escreva um programa em Linguagem C que receba
dois n�meros inteiros e retorne o menor n�mero.
a) Desenvolva procedimento sem passagem de par�metro para o problema proposto:
b) Desenvolva procedimento com passagem de par�metro para o problema proposto:
c) Desenvolva fun��o sem passagem de par�metro para o problema proposto:
*/
int com_param();

int main(){
	int A, B, menor;
	printf("d) Desenvolva fun��o com passagem de par�metro para o problema proposto:\n\n");
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
