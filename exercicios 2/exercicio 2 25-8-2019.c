/* 	2- Utilizando os conceitos de matriz bidimensional, modulação de código (função e
	procedimento) e passagem de parâmetro em matriz bidimensional, faça um
	programa em Linguagem C para o seguinte problema: Ler uma matriz M 5 x 5, calcular
	e escrever as seguintes somas:
	a) da linha 3 de M
	b) da coluna 2 de M
	c) da diagonal principal
	d) da diagonal secundária
	e) de todos os elementos da matriz
	Obs: Na figura abaixo o X indica os elementos que devem ser somados */
	
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define t 5 // t= tamanho

int i, j;
void imprimindo_matriz();
int somaLinha_3(int mtz [][t]);
int somaColuna_2(int mtz [][t]);
int somaDiagonalPrinc(int mtz [][t]);
int somaDiagonalSec(int mtz [][t]);
int somaTotal(int mtz [][t]);

int main(){
	int m[t][t];
		
	srand(time(NULL));
	for (i=0; i<5; i++){
		for(j=0; j<5; j++){
			m[i][j]= rand() % 100;
		}
	}
	imprimindo_matriz(m);
	puts("\n");
	printf("A soma da linha 3 de M: %d\n", somaLinha_3(m));
	printf("A soma da coluna 2 de M: %d\n", somaColuna_2(m));
	printf("A soma da diagonal principal de M: %d\n", somaDiagonalPrinc(m));
	printf("A soma da diagonal secundaria de M: %d\n", somaDiagonalSec(m));
	printf("A soma da diagonal secundaria de M: %d\n", somaTotal(m));
	
	return 0;
}
void imprimindo_matriz(int mtz [][t]){
	for (i=0; i<t; i++){
		printf("\n");
		for(j=0; j<t; j++){
			printf("\t%d", mtz[i][j]);
		}
	}
}
int somaLinha_3(int mtz [][t]){
	int soma_l3=0;
	for(i=3, j=0; j<5; j++){
		soma_l3 += mtz[i][j];
	}
	return soma_l3;
}
int somaColuna_2(int mtz [][t]){
	int soma_col2=0;
	for(i=0, j=2; i<5; i++){
		soma_col2 += mtz[i][j];
	}
	return soma_col2;
}
int somaDiagonalPrinc(int mtz [][t]){
	int soma_diag_p=0;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i==j) soma_diag_p += mtz[i][j];
		}
	}
	return soma_diag_p;
}
int somaDiagonalSec(int mtz [][t]){
	int soma_diag_s=0;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i+j==4) soma_diag_s += mtz[i][j];
		}
	}
	return soma_diag_s;
}
int somaTotal(int mtz [][t]){
	int soma_total=0;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			soma_total += mtz[i][j];
		}
	}
	return soma_total;
}
