#include<stdio.h>
#include<stdlib.h>

void titulo(){
	printf( "e) Escreva um modulo recursivo que faça o seguinte: leia um numero; se o\n"
			"numero for negativo, o modulo para; caso contrario, o modulo imprime o\n"
			"numero e faz uma chamada recursiva a si mesmo\n\n");
}
int recusiv(int k){
	printf("Digite um numero: ");
	scanf("%d", &k);
	if(k<0) exit(0);
	else {
		printf("O numero e: %d", recusiv(k));
	}
	recusiv(k);
}
int main(){
	int i=0;
	titulo();
	recusiv(i);
	
	return 0;
}
