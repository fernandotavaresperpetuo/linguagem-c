#include<stdio.h>

void titulo(){
	printf( "d) Escreva um procedimento recursivo, ImprimeSerie(i,j,k: inteiro), que imprime\n"
			"na tela a série de valores do intervalo [i,j], com incremento k. \n\n");
}
int intervalo(int i, int j, int k){
	printf("%d\t", i);
	if(i<j&&((i+k)<j)) intervalo(i+=k,j,k);
	else if(i>j&&((i-k)>j)) intervalo(i-=k,j,k);
}
int main(){
	int a, b, c, x=0;
	titulo();
	printf("Digite um valor de inicio:");
	scanf("%d", &a);
	printf("Digite um valor do final:");
	scanf("%d", &b);
	while(x==0){
		printf("Digite um valor de distancia de intervalo:");
		scanf("%d", &c);
		if(c>0) break;
		else printf("\n\tnao existe intervalo negativo ou igual a 0\n\n");
	}
	printf("\nO intervalo entre i e j e: %d", intervalo(a, b, c));

	return 0;
}
