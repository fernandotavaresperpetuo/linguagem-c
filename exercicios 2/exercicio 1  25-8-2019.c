/* 1- Utilizando os conceitos de vetor, modula��o de c�digo (fun��o e procedimento) e
	passagem de par�metro em vetor, fa�a um programa em Linguagem C para o seguinte
	problema: 
	Ler um vetor de at� 10 elementos. A leitura dever� ser executada at� que o
	vetor fique totalmente preenchido, ou seja, informado um valor negativo ou zero.
	Calcular e imprimir a soma dos valores maiores que 5 existentes no vetor  */
#include<stdio.h>
#define T 10

int vetSoma(int vetor[], int tam);

int main(){
	int i, arr[T];
	for(i=0; i<T; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &arr[i]);
		if(arr[i]<=0){
			while(i<T){
				arr[i]=0; i++;
			}
			break;
		} 
	}
	printf("soma dos valores maiores que 5: %d", vetSoma( arr, T));
	return 0;
}
int vetSoma(int vetor[], int tam){
	int i, soma=0;
	for(i=0; i<tam; i++){
		if(vetor[i]>5){
			soma += vetor[i];
		}
	}
	return soma;
}
