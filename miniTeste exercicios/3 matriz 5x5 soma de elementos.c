#include<stdio.h>
#include<stdlib.h>

void titulo();

int main(){
	int i, j, m[5][5], soma_linha3, soma_coluna2, soma_diag_prin, soma_diag_sec, soma_total;
	soma_linha3 = soma_coluna2 = soma_diag_prin = soma_diag_sec = soma_total = 0;
	titulo();
	srand(time(NULL));
	for (i=0; i<5; i++){
		for(j=0; j<5; j++){
			m[i][j]= rand() % 100;
		}
	}
	for(i=3, j=0; j<5; j++){
		soma_linha3 += m[i][j];
	}
	for(i=0, j=2; i<5; i++){
		soma_coluna2 += m[i][j];
	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i==j) soma_diag_prin += m[i][j];
		}
	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i+j==4) soma_diag_sec += m[i][j];
		}
	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			soma_total += m[i][j];
		}
	}
	for(i=0; i<5; i++){
		printf("\n");
		for(j=0; j<5; j++){
			printf("%d\t", m[i][j]);
		}
	}
	puts("\n");
	printf("A soma da linha 3 de M: %d\n", soma_linha3);
	printf("A soma da coluna 2 de M: %d\n", soma_coluna2);
	printf("A soma da diagonal principal de M: %d\n", soma_diag_prin);
	printf("A soma da diagonal secundaria de M: %d\n", soma_diag_sec);
	printf("A soma da diagonal secundaria de M: %d\n", soma_total);
	return 0;
}
void titulo(){
	printf( " 3- Utilizando os conceitos de matriz faça um programa em Linguagem C para o\n"
			" seguinte problema: Ler uma matriz M 5 x 5, calcular e escrever as seguintes\n"
			" somas:\n");
	printf( " a) da linha 3 de M\n"
			" b) da coluna 2 de M\n"
			" c) da diagonal principal\n"
			" d) da diagonal secundária\n"
			" e) de todos os elementos da matriz\n");
}
	

